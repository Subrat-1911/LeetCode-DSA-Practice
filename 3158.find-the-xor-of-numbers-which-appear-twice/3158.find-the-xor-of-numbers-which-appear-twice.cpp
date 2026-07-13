        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
        }
                ans.push_back(nums[i]);
            }
        int m = ans.size();
        for(int i=0;i<m;i++){
            x=x^ans[i];
        }
    }
        int x=0;
        return x;
};

