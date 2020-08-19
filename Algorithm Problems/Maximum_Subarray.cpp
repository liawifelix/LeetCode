//Maximum Subarray
//Date 19 Aug 2020
//Source https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		int dp[nums.size()];
		dp[0]=nums[0];
		int res=nums[0];
        for(int i=1;i<nums.size();i++){
			int s= (dp[i-1]>0? dp[i-1]:0);
			dp[i]= nums[i]+ s;
			res= max(res, dp[i]);
		}
		return res;
    }
};
