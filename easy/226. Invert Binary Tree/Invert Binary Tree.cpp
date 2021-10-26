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
    void dfs(TreeNode* root){
        if(!root) return;
        if(root->left) dfs(root->left);
        if(root->right) dfs(root->right);
        TreeNode* tmp;
        
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
    }
    TreeNode* invertTree(TreeNode* root) {
        dfs(root);
        return root;
    }
};
