            
            nums[i]-=rev(nums[i]);
        for(int i=0;i<n;i++){
        int n=nums.size();
        unordered_map<int,int>mp;
    int countNicePairs(vector<int>& nums) {
        }
        int count=0;
        for(auto ele:nums){
            if(mp.find(ele)!=mp.end()){
                count+=mp[ele];
                mp[ele]++;
            }
            else mp[ele]++;
        }
        return count;
        
        
    }

