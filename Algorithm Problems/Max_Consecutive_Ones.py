# 20 July 2021

# Time complexity O(n)
# Space complexity O(1)

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans=0
        temp_ans=0
        for i in range(len(nums)-1):
            if nums[i]==1 and nums[i]==nums[i+1]:
                temp_ans += 1
            elif nums[i]==1:
                temp_ans += 1
                ans= max(ans, temp_ans)
                temp_ans=0
            else:
                temp_ans=0
        if nums[len(nums)-1]:
            temp_ans += 1
            ans= max(temp_ans, ans)
        return ans
