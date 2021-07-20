# 20 July 2021

# Time complexity O(n)
# Space complexity O(1)

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        dp=[False for i in range(len(nums))]
        dp[len(nums)-1]= True
        nearest_true= len(nums)-1
        for i in reversed(range(len(nums)-1)):
            if i+nums[i]>=len(nums)-1:
                dp[i]= True
                nearest_true= i
            elif i+nums[i]>=nearest_true:
                dp[i]= True
                nearest_true= i
        return dp[0]
