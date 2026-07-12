                        hi--;
                        
                        while(lo<hi && nums[lo]==nums[lo-1]){
                            lo++;
                        }
                        while(lo<hi  && nums[hi]==nums[hi+1]){
                            hi--;
                            
                        }
                    }
                    else if(s+k+nums[lo]+nums[hi]>target){
                        hi--;
                    }
                    else lo++;
                }

            }
            
            
            
        }

