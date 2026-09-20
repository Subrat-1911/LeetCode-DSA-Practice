class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1;
        long long n1=n;
        if(n<0){
            x=1/x;
            n1=-(long long)n;
        }
        double result=1;
        while(n1>0){
            if(n1%2==1){
                result*=x;
            }
            x*=x;
            n1=n1/2;
        }

