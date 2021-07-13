# 13 July 2021

# Time complexity O(n^2)
# Space complexity O(1)

class Solution:
    def longestPalindrome(self, s: str) -> str:
        ans=s[0]
        for i in range(len(s)):
            # odd
            high= i+1
            low= i-1

            while high<len(s) and low>=0 and s[high]==s[low]:
                if len(ans)<high-low+1:
                    ans= s[low:high+1]
                high += 1
                low -= 1

            # even
            high= i
            low=i-1

            while high<len(s) and low>=0 and s[high]==s[low]:
                if len(ans)<high-low+1:
                    ans= s[low:high+1]
                high += 1
                low -= 1

        return ans
