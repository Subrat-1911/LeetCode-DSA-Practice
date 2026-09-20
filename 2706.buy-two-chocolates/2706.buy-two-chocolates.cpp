        }
                first_min=prices[i];
            }
        for(int i=0;i<n;i++){
            if(prices[i]<sec_min && prices[i]!=first_min){
                sec_min=prices[i];
            }
        }
        int x=(first_min+sec_min);
        if(money-x<0) return money;
        return money-x;
    }
};

