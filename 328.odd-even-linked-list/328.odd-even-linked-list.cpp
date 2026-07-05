                t=t->next;
                to->next=t;
            if(n%2!=0){
                to=to->next;

            }
            else{
                te->next=t;
                t=t->next;
                te=te->next;
            } 
            n++;
            

            
        }
        to->next= ev->next;
        te->next=NULL;
        return od->next;

