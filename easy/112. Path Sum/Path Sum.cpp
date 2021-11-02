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
    bool ans = false;
    
    void dfs(TreeNode* root, int targetSum, int sum){
        if(!root) return;
        
        sum += root->val;
        if(targetSum == sum && root->left == nullptr && root->right == nullptr) ans = true;
        
        if(root->right) dfs(root->right, targetSum, sum);
        if(root->left) dfs(root->left, targetSum, sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return ans;
        
        dfs(root, targetSum, 0);
        return ans;
    }
};
