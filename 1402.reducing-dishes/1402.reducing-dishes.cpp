        for(int i=0;i<n;i++){
            if(suf[i]>=0){
        }
                mindex=i;  // mark the idx
            }
        int mindex=-1; //check where +ve number is starting 
        for(int i=mindex;i<n;i++){ //run loop start with mindex till end
        int sat=1; //satisfation level
            sum=sum+(satisfaction[i]*sat);  // add in sum by multiply with satisfaction level
        long sum=0;
            sat++;  //satisfaction level alwayes increase by 1;
        }
            suf[i]=satisfaction[i]+suf[i+1];
        for(int i=n-2;i>=0;i--){
        suf[n-1]=satisfaction[n-1];
        }
        return sum;

                break;
        if(mindex==-1) return 0; // if there is no +ve number return 0;
        long suf[n]; //then create an suffix sum array
        sort(satisfaction.begin(),satisfaction.end()); //1st sort the array
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
public:
class Solution {

