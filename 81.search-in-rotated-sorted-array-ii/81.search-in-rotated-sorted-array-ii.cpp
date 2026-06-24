class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[lo] == nums[mid] && nums[mid] == nums[hi]){
                lo++;
                hi--;
            }
            else if(nums[lo]<=nums[mid]){  // chech 1st half sorted hai ya nehi  
                if(nums[lo]<=target && target<nums[mid]){  //ager hai to target hai ya nehi
                    hi=mid-1; //ager hai to hi ko mid ke piche le aao
                }
                else{
                    lo=mid+1;  // nehi hai to lo ko mid ke aage le jao

