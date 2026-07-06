            else if(n==left) b=temp;
            else if(n==right) c=temp;
            else if(n==right+1) d=temp;
            temp=temp->next;
            n++;
        }
        if(a!=NULL) a->next=NULL;
        c->next=NULL;
        c=Reverse(b);
        if(a!=NULL) a->next=c;
        b->next=d;
        if(a!=NULL) return head;

    }
        else return c;
};

