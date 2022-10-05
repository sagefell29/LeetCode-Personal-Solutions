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
        vector<int> p;
        while (head!=NULL)
        {
            p.push_back(head->val);
            head=head->next;
        }
        int n=p.size()-1,i=0;
        while (i<n)
        {
            if (p[i]!=p[n]) return false;
            n--; i++;
        }
        return true;
    }
};