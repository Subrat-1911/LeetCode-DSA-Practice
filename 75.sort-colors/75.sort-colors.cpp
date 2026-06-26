        //     }
        //     else nums[i]=2;
            
        // }
        //one pass also
        int n=nums.size();
        int lo=0;
        int mid=0;
        int hi=n-1;
        while(mid<=hi){
            if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[hi];
                nums[hi]=temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[lo];
                nums[lo]=temp;

