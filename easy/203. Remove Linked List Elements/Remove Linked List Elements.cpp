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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return nullptr;
        head->next = removeElements(head->next, val);
        ListNode* tmp;
        tmp = head;
        
        if(head->val == val){
            tmp = tmp->next;
            delete head;
        }
        
        return tmp;
    }
};
