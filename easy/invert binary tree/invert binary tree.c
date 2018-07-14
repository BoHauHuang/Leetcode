// use inorder triversal, and change two sides of binary tree
// AC: 0 ms

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode* temp;

	if (!root || !root->left && !root->right) return root;

	if(root->left || root->right){
		temp = root->right;
		root->right = invertTree(root->left);
		root->left = invertTree(temp);
	}
    
    return root;
}
