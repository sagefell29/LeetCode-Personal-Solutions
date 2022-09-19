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
    ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next==NULL) return head;
        ListNode *n=new ListNode;
        vector<int> a;
        while (head->next!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        a.push_back(head->val);
        reverse(a.begin(),a.end());
        ListNode *ans=n;
        n->val=a[0];
        for (int i=1;i<a.size();i++)
        {
            n->next=new ListNode(a[i]);
            n=n->next;
        }
        return ans;
    }
};