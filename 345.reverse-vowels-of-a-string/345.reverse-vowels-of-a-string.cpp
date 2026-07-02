class Solution {
public:
    bool caps(char s){
        if(s=='A') return true;
        else if(s=='E') return true;
        else if(s=='I') return true;
        else if(s=='O') return true;
        else if(s=='U') return true;
        else if(s=='a') return true;
        else if(s=='e') return true;
        else if(s=='i') return true;
        else if(s=='o') return true;
        else if(s=='u') return true;
        else return false;
    }
    string reverseVowels(string s) {
        int n=s.size();

