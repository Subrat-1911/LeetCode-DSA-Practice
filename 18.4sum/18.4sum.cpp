class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                long long s=nums[i];
                long long k=nums[j];
                long long lo =j+1;
                long long hi=n-1;
                while(lo<hi){
                    vector<int>v;
                    long long sum=(s+k+nums[lo]+nums[hi]);

