/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* fast;
        ListNode* slow;
        fast = head->next;
        slow = head;
        
        while(fast && slow){
            if(fast == slow) return true;
            
            if(fast->next && fast->next->next) fast = fast->next->next;
            else break;
            if(slow->next) slow = slow->next;
            else break;
        }
        return false;
    }
};
