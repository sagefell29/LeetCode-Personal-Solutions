/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        TreeNode* h=root;
        while (h->right!=NULL || h->left!=NULL)
        {
            if (h->val>val && h->left!=NULL) h=h->left;
            else if (h->val<val && h->right!=NULL) h=h->right;
            else break;
        }
        if (h->val>val) h->left=new TreeNode(val);
        else if (h->val<val) h->right=new TreeNode(val);
        return root;
    }
};