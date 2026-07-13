                    v.push_back(nums[lo]);
                    v.push_back(nums[hi]);
            if(i>0 && nums[i]==nums[i-1]) continue;
            int s=nums[i];
            int lo =i+1;
            int hi=n-1;
            while(lo<hi){
                vector<int>v;
                if(s+nums[lo]+nums[hi]==0){
                    v.push_back(s);
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){

