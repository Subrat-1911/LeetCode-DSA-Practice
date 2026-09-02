        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
        }
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        vector<int>ans;
        int i=0;  // traves both vector. we can also creat different iterator for this
        while(i<n/2){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;
        }
        return ans;

