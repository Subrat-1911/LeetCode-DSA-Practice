class Solution {
public:
    bool isPerfectSqure(int c){
        int x = sqrt(c);
        if(x*x==c){
            return true;
        }
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int y = c;
        while(x<=y){
            if(isPerfectSqure(x) && isPerfectSqure(y) ){
                return true;
            }
            else if(!isPerfectSqure(y)){
                y=(int)sqrt(y)*(int)sqrt(y);
                x=c-y;

