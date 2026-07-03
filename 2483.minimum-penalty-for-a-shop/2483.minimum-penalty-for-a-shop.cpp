            if(customers[i]=='Y'){
                noy++;
                suf[i]=noy;
            }
            else if(noy>0){
                suf[i]=non;
            }
            else{
                suf[i]=0;
            }
        }
        for(int i=0;i<n+1;i++){ //add
            ans[i]=pre[i]+suf[i];
        }
        int min=INT_MAX;
        int mindx=-1;
        for(int i=0;i<n+1;i++){ // check min
            if(ans[i]<min){
                min=ans[i];
                mindx=i;
            }
        }
        return mindx;

    }
};

