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
    void pb(TreeNode *root,unordered_map<int,int>& ans)
        {
            if (root==NULL) return;
            ans[root->val]++;
            pb(root->left,ans);
            pb(root->right,ans);
        }
    
    vector<int> findMode(TreeNode* root) 
        {
        if (root->right==NULL && root->left==NULL) return {root->val};
        unordered_map<int,int> ans;
        pb(root,ans);
        vector<int> a={0,0},b;
        for (auto& i:ans)
        {
            if (i.second>a[0]) a={i.second,i.first};
            else if (i.second==a[0]) a.push_back(i.first);
        }
        for (int i=1;i<a.size();i++) b.push_back(a[i]);
        return b;
        }
};