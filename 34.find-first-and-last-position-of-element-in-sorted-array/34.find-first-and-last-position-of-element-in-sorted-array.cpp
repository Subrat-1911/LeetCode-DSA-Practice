                finalVector[0]=mid;
                hi=mid-1;
            }
            else if(nums[mid]<=target) lo = mid+1;
            else if(nums[mid]>=target) hi = mid-1;

        }
        lo =0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid]==target){
                finalVector[1]=mid;
                lo=mid+1;
            }
            else if(nums[mid]<=target) lo = mid+1;
            else if(nums[mid]>=target) hi = mid-1;

        }
        return finalVector;

