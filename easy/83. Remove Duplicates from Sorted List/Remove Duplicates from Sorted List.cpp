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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* ans;
        ListNode* slow = head;
        ListNode* fast = head->next;
        ans = slow;
        while(slow){
            while(fast && slow->val == fast->val){
                fast = fast->next;
            }
            slow->next = fast;
            slow = slow->next;
            if(fast) fast = fast->next;
        }
        return ans;
    }
};
