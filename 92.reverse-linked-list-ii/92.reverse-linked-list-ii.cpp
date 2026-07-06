
class Solution {
public:
    ListNode* Reverse(ListNode* head){
        ListNode* pre = NULL;
        ListNode* nxt ;
        ListNode* curr = head;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        }
        return pre;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){

