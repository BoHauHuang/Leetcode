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
    void dfs(TreeNode* root, string path, vector<string>& ans){
        if(path != "") path += "->";
        path += to_string(root->val);
        
        if(root->left) dfs(root->left, path, ans);
        if(root->right) dfs(root->right, path, ans);
        
        if(!root->left && !root->right){
            ans.push_back(path);
            return;
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = "";
        dfs(root, path, ans);
        return ans;
    }
};
