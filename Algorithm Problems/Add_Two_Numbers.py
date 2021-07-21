# 21 July 2021

# Time complexity O(n)
# Space complexity O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        temp= 0
        new_root= ListNode(0)
        head= new_root
        while l1 or l2:       
            temp = temp//10
            if l1:
                temp += l1.val
                l1= l1.next
            if l2:
                temp += l2.val
                l2= l2.next
            new_root.next= ListNode(temp%10)
            new_root= new_root.next
        if temp//10==1:
            new_root.next= ListNode(1)

        return head.next
