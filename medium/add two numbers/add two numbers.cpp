/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// simple adder implemented by linked list
// AC, 20 ms, 10.3 MB

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode *tmp = new ListNode(0);
		ListNode *ans = tmp;
		int carry = 0;
		while(l1 || l2 || carry){
			carry += (((l1==NULL)? 0 : l1->val)+((l2==NULL)? 0 : l2->val));
			l1 = (l1 == NULL)? l1 : l1->next;
			l2 = (l2 == NULL)? l2 : l2->next;
        	
			tmp->val = carry%10;
			carry /= 10;
			// if l1 is not NULL or l2 is not NULL or (l1 and l2 are NULL but there still has carry)
			if(l1 || l2 || carry){
				tmp->next = new ListNode(0);
				tmp = tmp->next;
			}
		}
		
		return ans;
    }
};
