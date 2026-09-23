class Solution {
public:
    int Divisor(vector<int>& nums, int divisor){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=(nums[i] + divisor - 1) / divisor;  // nearest interger greater than or quual to that element
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int hi=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>hi){
                hi=nums[i];
            }

