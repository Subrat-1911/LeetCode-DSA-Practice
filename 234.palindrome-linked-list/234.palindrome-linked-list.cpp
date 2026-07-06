        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=slow->next;
        newHead=Reverse(newHead);
        while(b!=NULL){
        ListNode* a =head;
        ListNode* b = newHead;
        ListNode* fast =head;
        ListNode* slow =head;

        // return true;
        // }
        //     td=td->next;
        //     temp=temp->next;
        //     }
        //         return false;
        //     if(temp->val!=td->val){
        // while(temp!=NULL){
        // td=dummy;
        // temp=head;
        // dummy = Reverse(dummy);

