class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lo =0;
        int hi = n-1;
        vector<int> finalVector(2,-1);  // size 2 and defult -1 -1
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid]==target){
                finalVector[0]=mid;
                hi=mid-1;
            }
            else if(nums[mid]<=target) lo = mid+1;
            else if(nums[mid]>=target) hi = mid-1;

        }
        lo =0;
        hi = n-1;

