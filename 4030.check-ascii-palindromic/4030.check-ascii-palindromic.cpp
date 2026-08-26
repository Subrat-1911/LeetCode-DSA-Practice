class Solution {
public:
    bool isPalindromic(string s) {
        int n=s.size();
        int lo=0;
        int hi=n-1;
        while(lo<hi){
            if(s[lo]!=s[hi]) return false;
            lo++;
            hi--;
        }
        return true;
    }
};

