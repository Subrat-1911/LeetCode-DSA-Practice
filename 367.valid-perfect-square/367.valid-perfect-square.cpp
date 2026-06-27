        // if(x*x==num) return true;
        // else return false;

        // but here we cant use sqrt function;
        int lo =0;
        int hi =num;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(mid*mid==num) return true;
            else if((mid*mid)>num){
                hi=mid-1;
            }
            else if((mid*mid)<num){
                lo=mid+1;
            }
        }
        return false;
    }
};

