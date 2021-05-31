# 31 May 2021

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans=0
        for n in nums:
            ans^=n
        return ans
