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
    void dfs(TreeNode *root, int &ans, int &deep, int pos){
        if(!root) return;
        
        if(root->left == NULL && root->right == NULL){
            if(deep < pos){
                deep = pos;
                ans = root->val;
            }
            else if(deep == pos){
                ans += root->val;
            }
        }
        
        dfs(root->left, ans, deep, pos+1);
        dfs(root->right, ans, deep, pos+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
		if(root == NULL) return 0;
        
        int ans = 0, deep = 0;
        dfs(root, ans, deep, 0);
        
        return ans;
    }
};
