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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* a;
        ListNode* b;
        ListNode* c;
        
        a = head;
        b = head->next;
        c = head->next->next;
        
        b->next = a;
        a->next = swapPairs(c);
        return b;
    }
};
