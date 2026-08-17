        }
        for(int i=0;i<n;i++){
            string str = revers(words[i]);
            if(s.find(str)!=s.end()){  // target exsit
        int count=0;
            if(words[i]==str) continue;
                count++;
                s.erase(words[i]);
            }
        }
        return count;
    }
            
            s.insert(words[i]);
        for(int i=0;i<n;i++){
        unordered_set<string> s;
        int n = words.size();
    int maximumNumberOfStringPairs(vector<string>& words) {

