class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int op = 0;
        int mini = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini)
                mini = prices[i];
            
            if(op<prices[i]-mini)
                op = prices[i]-mini;
        }
        
        if(op<0)
            return 0;
        return op;
    }
};