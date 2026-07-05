        //     lists.pop_back();
        //     ListNode* b=lists[lists.size()-1];
        //     lists.pop_back();
        //     ListNode* c=mergeTwoLists(a,b);
        //     lists.push_back(c);

        // }
        while(lists.size()>1){        //TC=O(NKlogk)
            ListNode* a=lists[0];  // starting se 2 node uthao then merge then push back
            lists.erase(lists.begin());  // use to remove 1st element of vector
            ListNode* b=lists[0];
            lists.erase(lists.begin());
            ListNode* c=mergeTwoLists(a,b);
            lists.push_back(c);

        }
        return lists[0];  // return the 1st element;

