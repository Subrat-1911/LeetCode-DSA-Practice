
        // }
        //     }
        //         else break;
        // here we can use binary search
        for(int i=0;i<m;i++){
            int lo=0;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]<=queries[i]){
                    ans[i]=mid+1;
                }
                else if(nums[mid]>queries[i]){
                    hi=mid-1;
                }
                
            }
        }
        return ans;
    }
                    lo=mid+1;
};

