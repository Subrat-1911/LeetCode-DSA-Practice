class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(mid%2==0){
                 if(nums[mid]==nums[mid+1]){
                    //search rigt
                    lo=mid+1;
                }
                else {
                    hi=mid-1;
                }
            }
            else {

