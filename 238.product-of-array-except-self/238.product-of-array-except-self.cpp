        }
        int p =nums[n-1];
        for(int i=n-2;i>=0;i--){
            p*=nums[i];
        }
        return pre;

        
        

    }
            pre[i]=pre[i-1]*nums[i-1];
        for(int i=1;i<n;i++){
        pre[0]=1;
            pre[i]*=p;
        vector<int>pre(n);


