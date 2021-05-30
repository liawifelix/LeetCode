# 30 May 2021

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        seen_before= set()
        while head != None:
            if head in seen_before:
                return True
            seen_before.add(head)
            head= head.next
        return False
