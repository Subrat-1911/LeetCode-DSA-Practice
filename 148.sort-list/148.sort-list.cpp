                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
            }
            else{
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;

            }
            tail->next=(list1!=NULL)?list1:list2;
            
        }
        return dummy->next;

        
        
    }

