class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
        
        while(k>0){
            int min=INT_MAX;
            int mindx=-1;
            for(int i=0;i<n;i++){
                if(nums[i]<min){
                    min=nums[i];
                    mindx=i;
                }
            }
            if(min==0) break;
            else nums[mindx]=-nums[mindx];

