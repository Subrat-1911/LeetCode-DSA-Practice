            int sum=Divisor(nums,mid);
            if(sum>threshold){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        return lo;

        
    }
};

