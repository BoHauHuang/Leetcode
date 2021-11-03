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
    bool ans = true;
    void dfs(TreeNode* root, int rv){
        ans &= (rv == root->val);
        
        if(!root->left && !root->right) return;
        if(root->left) dfs(root->left, rv);
        if(root->right) dfs(root->right, rv);
    }
    bool isUnivalTree(TreeNode* root) {
        dfs(root, root->val);
        return ans;
    }
};
