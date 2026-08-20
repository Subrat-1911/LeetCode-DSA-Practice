class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg++;
            else if(nums[i]>0) pos++;
        }
    }
        int neg=0;
        int pos=0;
        return max(neg,pos);
};

