# 22 July 2021

# Time complexity O(n)
# Space complexity O(1)

class Solution:
    def partitionDisjoint(self, nums: List[int]) -> int:
        last=0
        last_value= nums[last]
        max_val= nums[last]
        
        for i in range(len(nums)):
            max_val= max(max_val, nums[i])
            if last_value>nums[i]:
                last=i
                last_value= max_val
                
        return last+1
