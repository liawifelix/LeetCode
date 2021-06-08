# 8 June 2021

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        res= ListNode(0)
        head= res
        if l1!=None and l2!=None:
            if l1.val < l2.val:
                res.next= l1
                l1= l1.next
            else:
                res.next= l2
                l2= l2.next
            res= res.next
        elif l1!=None:
            res.next= l1
            l1= l1.next
            res= res.next
        elif l2!=None:
            res.next= l2
            l2= l2.next
            res= res.next
        else:
            return head.next

        while l1!=None and l2!=None:
            if l1.val<l2.val:
                res.next= l1
                l1= l1.next
                res= res.next
            else:
                res.next= l2
                l2= l2.next
                res= res.next

        if l1!=None:
            res.next= l1
        elif l2!=None:
            res.next= l2
        return head.next
