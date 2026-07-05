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
        tl->next=hi->next;;
        th->next=NULL;
        return lo->next;
    }
};

