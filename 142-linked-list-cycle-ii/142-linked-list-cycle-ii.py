# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None: return None
        v=set()
        while head.next:
            if head in v:
                return head
            v.add(head)
            head=head.next
        return None