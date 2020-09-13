//Count Unhappy Friends
//13 Sept 2020
//Source https://leetcode.com/problems/count-unhappy-friends/

class Solution {
public:
    bool process(vector<vector<int>>& preferences, vector<int> p1, vector<int>p2, bool bswap){
        if(bswap){
            swap(p1[0], p1[1]);
        }
        
        int tempans=0;
        vector<int> temp;
        int first= p1[0];
        int second= p1[1];
        
        for(int i=0;i<preferences[first].size();i++){
            if(preferences[first][i]!=second && (preferences[first][i]==p2[0] || preferences[first][i]==p2[1])){
                temp.push_back(preferences[first][i]);
            }
            else if(preferences[first][i]==second){
                break;
            }
        }
        for(int i=0;i<temp.size();i++){
            int itspair= (p2[0]==temp[i]? p2[1]: p2[0]);
            for(int j=0;j<preferences[temp[i]].size();j++){
                if(preferences[temp[i]][j]!=itspair && preferences[temp[i]][j]==first){
                    return true;
                }
                else if(preferences[temp[i]][j]==itspair){
                    break;
                }
            }
        }
        return false;
    }    
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        vector<int> t(n,0);
        int ans=0;
        for(int i=0;i<pairs.size();i++){
            for(int j=0;j<pairs.size();j++){
                if(i!=j){
                    if(t[pairs[i][0]]==0 && process(preferences, pairs[i], pairs[j], false)){
                        t[pairs[i][0]]=1;
                    }
                    if(t[pairs[i][1]]==0 && process(preferences, pairs[i], pairs[j], true)){
                        t[pairs[i][1]]=1;
                    }
                }
            }
        }
        for(int i=0;i<t.size();i++){
            ans+=t[i];
        }
        return ans;
    }
};
