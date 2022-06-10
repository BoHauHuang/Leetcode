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
    vector<vector<int> > v;
    void dfs(TreeNode *root, int sum, int targetSum, vector<int> tmp){
        if(!root) return;
        sum += root->val;
        tmp.push_back(root->val);
        
        if(!root->left && !root->right){
            if(targetSum == sum){
                v.push_back(tmp);
            }
        }
        
        if(root->left) dfs(root->left, sum, targetSum, tmp);
        if(root->right) dfs(root->right, sum, targetSum, tmp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> tmp;
        dfs(root, 0, targetSum, tmp);
        return v;
    }
};
