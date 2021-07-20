# 20 July 2021

# Time complexity O(n)
# Space complexity O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        temp_head= head
        
        lst=[]
        
        while temp_head:
            lst.append(temp_head)
            temp_head= temp_head.next
        
        if len(lst)==n:
            return head.next
        
        lst[-n-1].next= lst[-n-1].next.next

        return head
