
        while (lo < hi) {
        int lo = 0, hi = n ;
        // return max(neg,pos);
         // First positive index
        //     else if(nums[i]>0) pos++;
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]<0) neg++;
        if((n==2 && nums[0]==0) && nums[1]==0 ) return 0;
        // int neg=0;
        // int pos=0;
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] <= 0)
                lo = mid + 1;
            else

