class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]==0) j++;
        }
        int j=1;
            else if(nums[i]==0){
                swap(nums[i],nums[j]);
            }
                i++;
                j++;
            else if(j==0) j++;
            else i++;
    }
};

