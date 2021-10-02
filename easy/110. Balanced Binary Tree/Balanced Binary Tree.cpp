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
    bool ok = true;
    int dfs(TreeNode* root){
        if(!root || !ok) return 0;
        int L = dfs(root->left);
        int R = dfs(root->right);
        if(abs(L-R) > 1) ok = false;
        return max(L, R)+1;
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return ok;
    }
};
