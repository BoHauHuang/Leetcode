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
    pair<int, int> xx, yy;
    
    void dfs(TreeNode* root, int x, int y, int depth){
        if(!root) return;
        if(root->left){
            if(root->left->val == x) xx = make_pair(root->val, depth+1);
            if(root->left->val == y) yy = make_pair(root->val, depth+1);
            dfs(root->left, x, y, depth+1);
        }
        if(root->right){
            if(root->right->val == x) xx = make_pair(root->val, depth+1);
            if(root->right->val == y) yy = make_pair(root->val, depth+1);
            dfs(root->right, x, y, depth+1);
        }
        return;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, x, y, 0);

        return (xx.first != yy.first && xx.second == yy.second);
    }
};
