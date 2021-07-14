# 14 July 2021

class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans=[[], [nums[0]]]
        for i in range(1, len(nums)):
            length=len(ans)
            for j in range(length):
                ans.append(ans[j]+[nums[i]])
        return ans
