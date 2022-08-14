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
    void pb(TreeNode* root,vector<int>& ans)
    {
        if (root==NULL) return;
        pb(root->left,ans);
        ans.push_back(root->val);
        pb(root->right,ans);
    }
    
    bool isValidBST(TreeNode* root) {
        if (root->right==NULL && root->left==NULL) return true;
        vector<int> ans;
        pb(root,ans);
        
        // for (int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
        for (int i=0;i<ans.size()-1;i++) if (ans[i]>=ans[i+1]) return false;
        
        return true;
    }
};

// if ((root->right!=NULL) && (root->left!=NULL) && (root->left->val<root->val) && (root->right->val>root->val)) 
        // {
        //     isValidBST(root->left);
        //     isValidBST(root->right);
        //     return true;
        // }
        // else if ((root->right!=NULL) && (root->right->val>root->val) && (root->left==NULL)) 
        // {
        //     isValidBST(root->right);
        //     return true;
        // }
        // else if ((root->left!=NULL) && (root->left->val<root->val) && (root->right==NULL)) 
        // {
        //     isValidBST(root->left);
        //     return true;
        // }
        // else return false;