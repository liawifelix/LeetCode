# 13 July 2021

class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        res_nums= dict()
        cum_sum=0
        res_nums[0]= -1
        for i in range(len(nums)):
            cum_sum += nums[i]
            cum_sum %= k
            if cum_sum in res_nums.keys() and i-res_nums[cum_sum]>1:
                return True
                break
            elif cum_sum not in res_nums.keys():
                res_nums[cum_sum]= i
        return False
