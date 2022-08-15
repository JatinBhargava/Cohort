class Solution {
public:
    int maxProfit(vector<int>& prices) {
         
        int n = prices.size();
        int mini = INT_MAX;
        int max_Pro = INT_MIN;
        vector<int>maxi(n,0);
        for(int i=0;i<prices.size();i++)
        {
          mini = min(mini,prices[i]);
          max_Pro = max(max_Pro,prices[i] - mini);  
        }
        
        return max_Pro;
    }
};



























/*
    int n = prices.size();
        int min_price = INT_MAX;
        int profit = INT_MIN;
        for(int i=0;i<n;i++){
            min_price = min(min_price,prices[i]);
            profit = max(profit,prices[i]-min_price);
        }
        return profit;
*/        