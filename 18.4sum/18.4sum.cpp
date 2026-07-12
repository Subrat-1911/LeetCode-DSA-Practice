                        }
                        while(lo<hi  && nums[hi]==nums[hi+1]){
                            hi--;
                            
                        }
                    }
                    else if(s+nums[lo]+nums[hi]>target){
                        hi--;
                    }
                    else lo++;
                }

            }
            

