        int j=0;
        int count=0;
        while(i<n1 && j<n2){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
        int i=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int n2=s.size();
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1=g.size();
class Solution {

