/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> vis;
    int dfs(ListNode* root){
        if(!root) return 0;
        
        return dfs(root->next) + 1;
    }
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        
        int len = dfs(head);
        
        for(int i = 0 ; i < len/2 ; i++){
            vis.push_back(head->val);
            head = head->next;
        }
        if(len%2) head = head->next;
        for(int i = 0 ; i < len/2 ; i++){
            if(head->val != vis[vis.size()-1-i]) return false;
            head = head->next;
        }
        return true;
    }
};
