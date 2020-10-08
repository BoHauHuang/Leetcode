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
    TreeNode* dfs(vector<int> &nums, int l, int r){
        if(l==r) return NULL;
        
        int idx = l;
        for(int i = l ; i < r ; i++){
            if(nums[idx] < nums[i]){
                idx = i;
            }
        }
        
        TreeNode* root = new TreeNode(nums[idx]);
        root->left = dfs(nums, l, idx);
        root->right = dfs(nums, idx+1, r);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums, 0, nums.size());
    }
};
