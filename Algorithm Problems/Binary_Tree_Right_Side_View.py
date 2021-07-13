# 13 July 2021

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: TreeNode) -> List[int]:
        res=[]
        if root==None:
            return []
        res=[root.val]
        
        leftNode= res+self.rightSideView(root.left)
        rightNode= res+self.rightSideView(root.right)
        
        if len(leftNode)>len(rightNode):
            return rightNode+leftNode[len(rightNode):]
        
        return rightNode
