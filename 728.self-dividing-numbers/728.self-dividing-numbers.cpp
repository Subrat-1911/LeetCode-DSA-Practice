class Solution {
public:
    bool selfDive(int x){
        int y=x;
        bool flag=false;
        while(y>0){
            int z= y%10;
            if(z==0) return false;
            y=y/10;
            if(x%z==0){
                flag=true;
            }
            else return false;
        }
        return flag;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;

