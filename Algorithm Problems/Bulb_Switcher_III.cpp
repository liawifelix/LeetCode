//Bulb Switcher III
//Date 15 Aug 2020
//Source https://leetcode.com/problems/bulb-switcher-iii/

using namespace std;
class Solution {
public:
    bool blue(vector<int>& m, int n, int start){
        for(int i=start;i<m.size();i++){
            if(m[i]==1)
                return false;
            if(m[i]==2)
                n--;
            if(n==0)
                return true;
        }
        return false;
    }
    void put(vector<int> &sign, int idx){
        if(idx==1){
            sign[idx]=2;
            for(int i=2;i<sign.size();i++){
                if(sign[i]==1){
                    sign[i]=2;
                }
                else
                    break;
            }
            return;
        }
        else{
            if(sign[idx-1]==2){
                sign[idx]=2;
                int j;
                for(j=idx+1;j<sign.size();j++){
                    if(sign[j]==1){
                        sign[j]=2;
                    }
                    else{
                        break;
                    }
                }
                return;
            }
            sign[idx]=1;
            return;
        }
    }
    int numTimesAllBlue(vector<int>& light){
        int ans=0;
        vector<int> s(light.size()+1,0);
        int st=1;
        for(int i=0;i<light.size();i++){
            put(s, light[i]);
            if(s[1]==2){
                if(blue(s,(i+1+1)-st,st)){
                    st= i+1;
                    ans++;
                }
            }
        }
        return ans;
    }
};
