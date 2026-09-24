        int revnum=0;
        while(x>0){
            int z=x%10;
            revnum=revnum*10+z;
        }
            x/=10;
        }
            flag=true;
        if(flag==true) return -revnum;
        return revnum;
        
    }
};

