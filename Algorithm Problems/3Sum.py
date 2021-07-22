# 22 July 2021

# Time complexity O(n^2)
# Space complexity O(1)

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums= sorted(nums)
        ans=[]
        for i in range(len(nums)):
            if i-1>=0 and nums[i-1]==nums[i]:
                pass
            else:
                target= -nums[i]
                left= i+1 
                right= len(nums)-1
                while left<right:
                    if target==nums[left]+nums[right]:
                        ans.append([nums[i], nums[left], nums[right]])
                        while left<right and nums[left]==nums[left+1]:
                            left+=1
                        while left<right and nums[right]==nums[right-1]:
                            right-=1
                        right-=1
                        left+=1
                    elif target<nums[left]+nums[right]:
                        right-=1
                    else:
                        left+=1
        return ans
