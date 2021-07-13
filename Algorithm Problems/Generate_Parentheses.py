# 13 July 2021

# Time complexity O(n)
# Space complexity O(n)

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        return self.helper([], "", n, n)
    
    def helper(self, arr, strr, left, right):
        if left==0 and right==0:
            arr.append(strr)
            return
        if left>0:
            self.helper(arr, strr + '(', left-1, right)
        if left<right:
            self.helper(arr, strr + ')', left, right-1)
        return arr
