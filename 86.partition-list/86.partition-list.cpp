        while(t!= NULL){
            if(t->val<x){
                tl->next=t;
                t=t->next;
                tl=tl->next;
            }
            else {
                th->next=t;
                t=t->next;
                th=th->next;
            }
        }
        tl->next=NULL;
        th->next=NULL;
        ListNode* th=hi;
        ListNode* tl=lo;
        ListNode* t= head;

