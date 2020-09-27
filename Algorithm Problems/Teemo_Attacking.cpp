//Teemo Attacking
//Date 27 Sept 2020
//Source https://leetcode.com/problems/teemo-attacking/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int gap;
        if(timeSeries.size()==0)
            return 0;
        for(int i=0;i+1<timeSeries.size();i++){
            gap= timeSeries[i+1]-timeSeries[i];
            ans= ans+ ((gap>=duration)?duration :gap); 
        }
        return ans+duration;
    }
};
