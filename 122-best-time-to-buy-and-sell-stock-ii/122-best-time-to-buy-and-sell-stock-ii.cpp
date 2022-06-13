class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_profit = INT_MAX;
        int profit = 0;
        for(int i=1;i<n;i++){
            //min_profit = min(min_profit,prices[i]);
            if(prices[i]>prices[i-1])
                profit+= abs(prices[i]-prices[i-1]);
        }
        return profit;
    }
};