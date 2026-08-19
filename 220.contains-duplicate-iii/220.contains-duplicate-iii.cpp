class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(i - j) <= indexDiff){
            }
        }
                    if(abs(nums[i] - nums[j]) <= valueDiff) return true;
                }
    }
        return false;
};

