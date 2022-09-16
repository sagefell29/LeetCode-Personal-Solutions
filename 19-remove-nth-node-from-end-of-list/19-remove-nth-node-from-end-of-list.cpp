/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next==NULL) return nullptr;
        ListNode* d=new ListNode();
        ListNode* s=d;
        ListNode* f=d;
        d->next=head;
        for (int i=0;i<n;i++) f=f->next;
        while (f->next!=NULL)
        {
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return d->next;;
    }
};