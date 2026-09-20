        int x=(prices[0]+prices[1]);
        if(money-x<0) return money;
        return money-x;
    }
};
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        sort(prices.begin(),prices.end());

