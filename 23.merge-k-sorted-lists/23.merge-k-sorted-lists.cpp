                tail=tail->next;

            }
            tail->next=(list1!=NULL)?list1:list2;
            
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {   // in this vector we pop back 2 node and sent to merge and push 
    merge list;
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a=lists[lists.size()-1];
            lists.pop_back();
            ListNode* b=lists[lists.size()-1];
            lists.pop_back();
            ListNode* c=mergeTwoLists(a,b);

