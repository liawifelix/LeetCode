# 11 July 2021

class Solution:
    def isPalindrome(self, x: int) -> bool:
        s_n= str(x)
        for i in range((len(s_n)//2)+1):
            if s_n[i]!=s_n[len(s_n)-i-1]:
                return False
        return True
