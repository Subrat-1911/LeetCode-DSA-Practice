class Solution {
public:
    bool isUgly(int n) {
        
        // return false;

        while(n>0){
            n=n/2; if(n==1) return true;
        }
    }
        if(n==1) return true;

            n=n/3; if(n==1) return true;
            n=n/5; if(n==1) return true;
        return false;
        if(n<=0) return false;
};

