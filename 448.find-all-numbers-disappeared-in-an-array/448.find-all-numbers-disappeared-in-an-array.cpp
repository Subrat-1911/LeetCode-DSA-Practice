        for(int i=0;i<n;i++){
            if((nums[abs(nums[i])-1])>0){
        }
                nums[(abs(nums[i]))-1]=-nums[(abs(nums[i]))-1];
            }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v.push_back(i+1);
            }
        }
    }
        return v;
};
        //sort(nums.begin(),nums.end());
        //int x=1;
        int n = nums.size();
        vector<int> v;

