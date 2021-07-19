# 19 July 2021

# Time complexity O(log n)
# Space complexity O(1)

class Solution:
    def searchInsert(self, ns: List[int], n: int) -> int:
        left= 0
        right= len(ns)-1

        prev_mid= -1

        if n>ns[right]:
            return len(ns)
        elif n<=ns[left]:
            return 0

        while left<right:
            mid= left+ (right-left)//2 
            if prev_mid==mid:
                if ns[mid]<n:
                    return mid+1
                else:
                    return mid
            prev_mid=mid
            if ns[mid]>n:
                right= mid
            else:
                left= mid
