        //     curr=next;
        // }
        // return pre;

        //recursive
        ListNode* newHead =reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;

        
        
    }
        //     pre=curr;
        if(head==NULL || head->next==NULL) return head;
};

