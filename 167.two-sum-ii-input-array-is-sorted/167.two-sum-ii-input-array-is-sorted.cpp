                ans.push_back(lo+1);
                ans.push_back(hi+1);
                return ans;
            }
            else if(numbers[lo]+numbers[hi]>target){
                hi--;
            }
            else lo++;
            if(numbers[lo]+numbers[hi]==target){
        while(lo<hi){
        int hi=n-1;
        int lo=0;
        int n = numbers.size();
        vector<int> ans;
    vector<int> twoSum(vector<int>& numbers, int target) {
public:
class Solution {

