# 7 June 2021

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seen=set(nums)
        if len(nums)==0:
            return 0
        dpp={}
        for i in seen:
            dpp[i]=1
        def dp(n):
            if n-1 in seen:
                if dpp[n-1]==1:
                    dpp[n] = dp(n-1)+1
                    return dpp[n]
                else:
                    dpp[n]=dpp[n-1]+1
                    return dpp[n]
            return dpp[n]
        maxx=1
        for i in seen:
            maxx= max(dp(i),maxx)
        return maxx
