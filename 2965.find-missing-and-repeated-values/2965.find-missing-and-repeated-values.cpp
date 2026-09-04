class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mp.find(grid[i][j]) ==mp.end()){  //not present 
                    sum+=grid[i][j];
                    mp[grid[i][j]]++;
                }
                else{
                    ans.push_back(grid[i][j]);
                }
            }
        }
        int totalSum=(n*n)*((n*n)+1)/2;
        ans.push_back(totalSum-sum);
        return ans;

    }

