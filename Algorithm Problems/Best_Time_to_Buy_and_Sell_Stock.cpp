//Best Time to Buy and Sell Stock
//Date 19 Sept 2020
//Souce https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=9999999;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min= prices[i];
            }
            else if(prices[i]-min > ans){
                ans= prices[i]-min;
            }
        }
        return ans;
    }
};
