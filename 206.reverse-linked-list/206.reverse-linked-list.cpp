class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
        ListNode* curr=head;
        ListNode* nxt;
        while(curr !=NULL){
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;

        }
        return pre;
        

