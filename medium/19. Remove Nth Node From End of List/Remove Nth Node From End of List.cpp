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
    int dfs_del(ListNode* cur, int n){
        if(cur->next == nullptr) return 1;
        else{
            int now = dfs_del(cur->next, n)+1;
            if(now == n+1){
                if(cur->next->next) cur->next = cur->next->next;
                else cur->next = nullptr;
            }
            return now;
        }
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr && n == 1) return nullptr;
        int total = dfs_del(head, n);
        if(total == n) head = head->next;
        return head;
    }
};
