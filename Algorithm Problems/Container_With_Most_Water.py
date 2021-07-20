# 20 July 2021

# Time complexity O(n)
# Space complexity O(1)

class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans=0
        i=0
        j= len(height)-1
        while i<j:
            ans= max(ans, (j-i)*min(height[i], height[j]))
            if height[i]<height[j]:
                i+=1
            else:
                j-=1
        return ans
