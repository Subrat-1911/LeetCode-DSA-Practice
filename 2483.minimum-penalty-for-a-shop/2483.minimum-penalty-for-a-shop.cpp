            else if(noy>0){
                suf[i]=noy;
            }
            else {
                suf[i]=0;
            }
        }
        for(int i=0;i<n+1;i++){
            ans[i]=pre[i]+suf[i];
        }
        int min=INT_MAX;
        int mindex=-1;
        for(int i=0;i<n+1;i++){
            if(ans[i]<min){
                min=ans[i];
                mindex=i;
            }
        }
        return mindex;
        
    }
};

