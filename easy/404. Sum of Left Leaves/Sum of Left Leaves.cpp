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
    int dfs(TreeNode* root){
        if(!root->left && !root->right) return 0;
        int l = 0, r = 0;
        
        if(root->left) l += dfs(root->left);
        if(root->right) r += dfs(root->right);
        if(root->left && !root->left->left && !root->left->right) return r+l+root->left->val;
        return r+l;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root);
    }
};
