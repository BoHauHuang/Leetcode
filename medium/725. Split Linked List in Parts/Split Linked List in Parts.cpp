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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        
        if(!head){
            for(int i = 0 ; i < k ; i++){
                ans.push_back(nullptr);
            }
            return ans;
        }
        if(!head->next){
            ans.push_back(head);
            for(int i = 1 ; i < k ; i++){
                ans.push_back(nullptr);
            }
            return ans;
        }
        ListNode* d = head;
        int total = 0;
        while(d){
            d = d->next;
            total++;
        }
        
        int avg = (int)(total/k);
        int more = total-avg*k;

        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow){
            ListNode* tmp;
            tmp = slow;
            
            for(int i = 1 ; i < avg ; i++){
                slow = slow->next;
                fast = fast->next;
            }
            
            if(avg&&more){
                slow = slow->next;
                fast = fast->next;
                more--;
            }
            slow->next = nullptr;
            ans.push_back(tmp);
            
            slow = fast;
            if(fast) fast = fast->next;
        }
        int s = ans.size();
        for(int i = 0 ; i < k-s ; i++){
            ans.push_back(nullptr);
        }
        return ans;
    }
};
