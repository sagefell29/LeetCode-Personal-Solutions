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
    ListNode* middleNode(ListNode* head) {
        ListNode* h=head;
        int c=0;
        while (h->next!=NULL) 
        {
            c++;
            h=h->next;
        }
        c++;
        c=(c/2);
        for (int i=0;i<c;i++) head=head->next;
        return head;
    }
};