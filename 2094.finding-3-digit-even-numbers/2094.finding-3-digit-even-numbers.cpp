            int c=x%10;
            x/=10;
            if(mp.find(a)!=mp.end()){
                mp[a]--;
                if(mp[a]==0) mp.erase(a);
                if(mp.find(b)!=mp.end()){
                   mp[b]--;
                    if(mp[b]==0) mp.erase(b);
                    if(mp.find(c)!=mp.end()){
                        if(i%2==0){
                            ans.push_back(i);
                        }
                    }
                    mp[b]++;
                }
                mp[a]++;
            }
          

