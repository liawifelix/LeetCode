# 20 July 2021
# Time complexity O(n^2)
# Space complexity O(1)

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp=[0 for i in range(n)] 
        for i in reversed(range(m)):
            for j in reversed(range(n)):
                if j==n-1 or i==m-1:
                    dp[j]=1
                else:
                    dp[j]= dp[j]+dp[j+1]
        return dp[0]
