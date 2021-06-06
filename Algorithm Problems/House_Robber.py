# 6 June 2021

class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[]
        prevMax=0
        for i in range(len(nums)+1):
            dp.append(0)
        for i in range(1, len(nums)+1):
            dp[i]=max(nums[i-1]+prevMax, dp[i-1]) 
            prevMax= dp[i-1]
        return dp[len(dp)-1]
