        ListNode* dummy=new ListNode(-1);
        while(pre->next==NULL){
        ListNode* pre=dummy;
            ListNode* fir=pre->next;

            ListNode* sec=fir->next;

            pre->next=sec;
            fir->next=sec->next;
            sec->next=fir;

            pre=fir;


        if(head==NULL || head->next==NULL) return head;
    ListNode* swapPairs(ListNode* head) {
        }
        return dummy->next;
    }
};

