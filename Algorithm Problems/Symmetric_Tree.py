# 22 July 2021

# Time complexity O(2^n) ?
# Space complexity O(n)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goDepthLeft(self, root, arr):
        arr.append(root.val)
    
        if root.left:
            self.goDepthLeft(root.left, arr)
        else:
            arr.append(None)
        
        if root.right:
            self.goDepthLeft(root.right, arr)
        else:
            arr.append(None)
    
    def goDepthRight(self, root, arr):
        arr.append(root.val)
    
        if root.right:
            self.goDepthRight(root.right, arr)
        else:
            arr.append(None)
        
        if root.left:
            self.goDepthRight(root.left, arr)
        else:
            arr.append(None)
    
    def isSymmetric(self, root: TreeNode) -> bool:
        left_node= root.left
        right_node= root.right
        
        left_arr=[]
        if left_node:
            self.goDepthLeft(left_node, left_arr)
        
        right_arr=[]
        if right_node:
            self.goDepthRight(right_node, right_arr)
            
        if left_arr==right_arr:
            return True
        
        return False
            
