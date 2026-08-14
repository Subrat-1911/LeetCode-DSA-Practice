        ListNode* pre=dummy;
        ListNode* dummy=new ListNode(-1);
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        while(pre->next!=NULL && pre->next->next != NULL){
            ListNode* fir=pre->next;
            ListNode* sec=fir->next;

            pre->next=sec;
            fir->next=sec->next;
            sec->next=fir;

            pre=fir;


        dummy->next=head;

