class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==7) return true;

        while(n>9){
            int x=0;
            while(n>0){
                int z =n%10;
                x = x+(z*z);
                n=n/10;
            }
            if(x==1) return true;
            if(x==7) return true;
            n=x;
             
        } 
        return false;

