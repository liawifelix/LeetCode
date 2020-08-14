//Rank Transform of an Array
//Date 14 Aug 2020
//Source https://leetcode.com/problems/rank-transform-of-an-array/

class Solution {
public:

    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res (arr.size(),0);
        vector<pair<int,int>> pr;
        if(arr.size()==0)
            return res;
        for(int i=0;i<arr.size();i++){
            pr.push_back({arr[i],i});
        }
        sort(pr.begin(),pr.end());
        int thres=1;
        for(int i=0;i+1<arr.size();i++){
            res[pr[i].second]= thres;
            if(pr[i].first!=pr[i+1].first){
                thres++;
            }
        }
        res[pr[arr.size()-1].second]= thres;
        return res;
    }
};
