/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int ans = 1;
    void dfs(Node* root, int depth){
        if(root==NULL) return;
        ans = max(depth, ans);
        
        for(int i = 0 ; i < root->children.size() ; i++){
            dfs(root->children[i], depth+1);
        }
    }
    int maxDepth(Node* root) {
        std::ios::sync_with_stdio(0);
        if(root == NULL) return 0;
        dfs(root, 1);
        return ans;
    }
};
