class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int buy=prices[0];
       for(int i=0;i<n;i++){
            if(prices[i]<buy){  // check the minimum prices of stock
        }
       int profit=0;
                buy=prices[i];
            }
            else if(prices[i]-buy>profit){  // check at every step the max profit
                profit=prices[i]-buy;
            }
    }
        return profit;
};

