        int n= nums.size();
        bool inc=true;
        bool dec=true;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
        }
                dec=false;
            }
            else if(nums[i]>nums[i+1]) {
                inc = false;
            }
        if(inc==true || dec == true){
            return true;
        }
        else return false;

    }

