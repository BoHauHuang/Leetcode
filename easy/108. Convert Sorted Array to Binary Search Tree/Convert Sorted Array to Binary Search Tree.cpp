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
    TreeNode* constructBST(vector<int>& nums, int l, int r){
        if(l > r) return nullptr;
        
        int mid = l+(r-l)/2;
        TreeNode* cur = new TreeNode(nums[mid]);
        cur->left = constructBST(nums, l, mid-1);
        cur->right = constructBST(nums, mid+1, r);
        return cur;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(nums, 0, nums.size()-1);
    }
};
