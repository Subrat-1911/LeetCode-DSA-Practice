        while(lo<=hi){
            if(people[lo]+people[hi]<=limit){
                count ++;
            }
            else if(people[lo]+people[hi]>limit){
                lo++;
                hi--;
                count++;
            }
                hi--;
        }
        return count;
    }
};
        int hi=n-1;
        int lo=0;
        int count=0;
        sort(people.begin(),people.end());

