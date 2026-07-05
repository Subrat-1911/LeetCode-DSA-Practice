        ListNode* pre =NULL;
    ListNode* reverseList(ListNode* head) {
public:
class Solution {
 */
        ListNode* curr=head;
        ListNode* next;
        while(curr!=NULL){
            next=curr->next;
        }
            curr->next=pre;
            pre=curr;
            curr=next;
        
        
    }
        return pre;
};

