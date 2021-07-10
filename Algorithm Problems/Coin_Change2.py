# 10 July 2021

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        
        
        dp=[[0 for i in range(len(coins))] for j in range(amount+1)]
        
        for i in range(len(coins)):
            dp[0][i]=1
            
        for i in range(1, amount+1):
            for j in range(len(coins)):
                dp[i][j]= dp[i-coins[j]][j] if coins[j]<=i else 0
                x= dp[i][j-1] if j>=1 else 0
                dp[i][j] += x
        
        return dp[amount][len(coins)-1]
