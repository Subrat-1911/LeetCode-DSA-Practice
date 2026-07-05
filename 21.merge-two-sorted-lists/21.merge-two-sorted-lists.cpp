 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL && list2!=NULL) return list2;
        if(list1!=NULL && list2==NULL) return list1;

        ListNode* dummy= new ListNode(0);
        ListNode* tail=dummy;
        while(list1!=0 && list2!=0){
            if(list1->val<list2->val){
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;

