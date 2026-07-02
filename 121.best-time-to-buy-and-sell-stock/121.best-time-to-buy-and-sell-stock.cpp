class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit=0;
        int buy=prices[0];
        //int sell=-1;
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
        }
    }

            int profit=prices[i]-buy;
            maxProfit=max(maxProfit,profit);
        return maxProfit;
};

