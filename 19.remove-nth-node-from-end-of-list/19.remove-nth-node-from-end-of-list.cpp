        ListNode* temp=head;
        int k=0;
        while(temp!=NULL){
        if(head==NULL) return NULL;
            temp=temp->next;
            k++;
        }
        int m=k-n;
        temp=head;
        for(int i=0;i<m-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
        
    }
        if(m==0) return head->next;
};

