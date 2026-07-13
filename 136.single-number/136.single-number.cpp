class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            x=x^nums[i];
        }
    }
        if(n==1) return nums[0];
        return x;
        int x=0;
};

