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
    int ans = -50000000;
    int dfs(TreeNode *root){
        if(!root) return 0;
        
        int l = 0, r = 0;
        if(root->left) l = dfs(root->left);
        if(root->right) r = dfs(root->right);
        
        l = max(0, l);
        r = max(0, r);
        
        ans = max(ans, l+r+root->val);
        
        return (max(l, r)+root->val);
    }
    int maxPathSum(TreeNode* root) {
        int t = dfs(root);
        
        return ans;
    }
};
