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
    bool isPalindrome(ListNode* head) {
        if (!head->next) return true;
        stack<int> a;
        ListNode* slow=head; ListNode* fast=head;
        while (fast!=nullptr && fast->next!=nullptr)
        {
            a.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        if (fast!=nullptr) slow=slow->next;
        while (slow!=nullptr)
        {
            if (a.top()!=slow->val) return false;
            a.pop();
            slow=slow->next;
        }
        return true;
    }
};