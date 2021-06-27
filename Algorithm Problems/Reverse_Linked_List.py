# 27 June 2021

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        prev= None
        while head:
            curr= head
            head= head.next
            curr.next= prev
            prev= curr
        return prev
