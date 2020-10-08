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
    int ans = 0;
    void dfs(TreeNode *root, int L, int R){
        if(root==NULL) return;
        
        if(root->val <= R && root->val >= L) ans += root->val;
        
        dfs(root->left, L, R);
        dfs(root->right, L, R);
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        dfs(root, L, R);
        
        return ans;
    }
};
