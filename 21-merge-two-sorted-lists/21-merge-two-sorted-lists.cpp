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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;
        ListNode *head=list1;
        vector<int> n;
        while (head->next!=NULL)
        {
            n.push_back(head->val);
            head=head->next;
        }
        n.push_back(head->val);
        head=list2;
        while (head->next!=NULL)
        {
            n.push_back(head->val);
            head=head->next;
        }
        n.push_back(head->val);
        sort(n.begin(),n.end());
        for (int i=0;i<n.size();i++) cout<<n[i]<<" ";
        ListNode *ptr=new ListNode(n[0]);
        head=ptr;
        for (int i=1;i<n.size();i++) 
        {
            ptr->next=new ListNode(n[i]);
            ptr=ptr->next;
        }
        return head;
    }
};