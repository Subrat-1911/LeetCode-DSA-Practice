        }
        else if(x >= arr[n-1]){
            for(int i =n-1; i>=n-k; i--){
                answer.push_back(arr[i]);
            }
            sort(answer.begin(),answer.end());
            return answer;
        }
        // ager target array ke ander hai to check karo ki array mai present hai ya nehi 
        int lo =0;
        int hi =n-1;
        bool flag = false;
        int Xmid=-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag = true;
                Xmid=mid;
                answer.push_back(arr[mid]);
                break;

