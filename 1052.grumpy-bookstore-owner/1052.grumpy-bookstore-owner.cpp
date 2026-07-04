                maxidx=i;
            }
            preWindow=currWindow;
            i++;
            j++;

        }
        for(int i=maxidx;i<maxidx+minutes;i++){
            grumpy[i]=0;

        }
        int answer=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
               answer += customers[i];
            }
            
        }
        return answer;

        
    }



};

