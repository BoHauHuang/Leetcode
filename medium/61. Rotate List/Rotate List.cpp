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
    int dfs(ListNode* root){
        if(!root) return 0;
        return dfs(root->next)+1;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !k) return head;
        int len = dfs(head);
        
        int shift = len-k%len;
        if(shift == len) return head;
        
        ListNode* target;
        ListNode* second;
        ListNode* ans;

        shift--;
        target = head;
        
        while(shift--){
            target = target->next;
        }
        second = target->next;
        ans = second;

        target->next = nullptr;
        while(second->next){
            second = second->next;
        }
        second->next = head;
        
        return ans;
    }
};
