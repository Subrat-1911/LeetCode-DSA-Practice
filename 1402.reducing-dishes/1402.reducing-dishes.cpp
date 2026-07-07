                break;
            }
        }
        if(mindex==-1) return 0; // if there is no +ve number return 0;
                mindex=i;  // mark the idx
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
        for(int i=n-2;i>=0;i--){
            suf[i]=satisfaction[i]+suf[i+1];
        }
        int mindex=-1; //check where +ve number is starting 
        suf[n-1]=satisfaction[n-1];
        long suf[n]; //then create an suffix sum array
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end()); //1st sort the array
    int maxSatisfaction(vector<int>& satisfaction) {
public:
class Solution {

