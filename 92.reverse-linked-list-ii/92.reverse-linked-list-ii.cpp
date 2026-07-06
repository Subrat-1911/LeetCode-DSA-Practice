            if(n==left-1)a=temp;
            else if(n==left) b=temp;
            else if(n==right) c=temp;
            else if(n==right+1) d=temp;
            temp=temp->next;
            n++;
        }
        a->next=NULL;
        c->next=NULL;
        c=Reverse(b);
        a->next=c;
        b->next=d;

    }
        return head;
};

