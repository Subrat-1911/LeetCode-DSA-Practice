            int lo =i+1;
            int hi=n-1;
            while(lo<hi){
                int sum=s+nums[lo]+nums[hi];
                if(abs(sum-target)<abs(closet-target)){
                    closet=sum;
                }
                if(sum<target)lo++;
                
                if(sum>target)hi--;
            }
                if(sum==target) return target;
            int s=nums[i];
        for(int i=0;i<n-2;i++){
        int closet=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        sort(nums.begin(),nums.end());
            
        }
        return closet;
         
        

