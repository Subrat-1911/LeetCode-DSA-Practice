                break;
            }
        }
                mindex=i;  // mark the idx
        int mindex=-1; //check where +ve number is starting 
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
        for(int i=n-2;i>=0;i--){
            suf[i]=satisfaction[i]+suf[i+1];
        }
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end()); //1st sort the array
        long suf[n]; //then create an suffix sum array
        suf[n-1]=satisfaction[n-1];
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

