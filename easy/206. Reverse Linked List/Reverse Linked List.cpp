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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* cur;
        ListNode* pre;
        ListNode* n;
        
        pre = nullptr;
        cur = head;
        n = head->next;
        
        while(cur){
            n = cur->next;
            cur->next = pre;
            pre = cur;
            cur = n;
        }
        
        return pre;
    }
};
