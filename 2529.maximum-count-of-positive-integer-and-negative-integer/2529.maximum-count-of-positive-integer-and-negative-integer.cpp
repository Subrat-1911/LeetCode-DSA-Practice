        lo=0;
        hi=n-1;
        int FPI=lo;
        }
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=0)hi=mid-1;
            else if(nums[mid]>0) lo=mid+1;
        }
        int FNI=hi;
        int pos=n-1-FPI+1;
        int neg=FNI+1;
        return max(pos,neg);
    }
};

