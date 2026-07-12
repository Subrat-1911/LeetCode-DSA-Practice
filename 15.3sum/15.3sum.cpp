                    while(lo<hi && nums[lo]==nums[lo-1]){
                    
                        lo++;
                    }
                    hi--;
                    ans.push_back(v);
                    lo++;
                if(s+nums[lo]+nums[hi]==0){
                    v.push_back(s);
                    v.push_back(nums[lo]);
                    v.push_back(nums[hi]);
                    while(lo<hi  && nums[hi]==nums[hi+1]){
                        hi--;
                        
                    }
                }
                else if(s+nums[lo]+nums[hi]>0){
                    hi--;
                }
                else lo++;

