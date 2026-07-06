 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        for(int i=0;i<n-1;i++){
        return head;
        int n=0;
            n++;
            temp=temp->next;
        }
        ListNode* temp=head;
        temp->next=temp->next->next;

