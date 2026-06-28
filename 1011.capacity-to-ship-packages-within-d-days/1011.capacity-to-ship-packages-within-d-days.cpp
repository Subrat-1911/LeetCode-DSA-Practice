class Solution {
public:
    bool check(int mid,vector<int>& weights, int days){
        int n = weights.size();
        int m = mid;
        int count = 1;
        for(int i=0; i<n ; i++){
            if(m>=weights[i]){
                m-=weights[i];
            }
            else {
                count ++;
                m=mid;
                m-=weights[i];
            }
        }
        if(count<= days) return true;
        else return false;
    }

