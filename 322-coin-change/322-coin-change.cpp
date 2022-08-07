class Solution {
public:
    
    //int dp[10010];
    
    int func(int ind,vector<int>& coins, int amount,vector<vector<int>>&dp) {
        
        if(ind==0)
        {
            if(amount%coins[0]==0)
                return amount/coins[0];
            
            return 1e9;
        }
        
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        
        int not_take = 0 + func(ind-1,coins,amount,dp);
        int take = INT_MAX;
        if(amount>=coins[ind])
        {
            take = 1 + func(ind,coins,amount - coins[ind],dp);
        }
        
        return dp[ind][amount]  = min(not_take,take);
        
//        if(amount==0)
//            return 0;
//         if(dp[amount]!=-1) return dp[amount];
        
//         int ans = INT_MAX;
//         for(auto coin:coins)
//         {
//             if(amount-coin>=0)
//             {
//                 ans = min(ans+0LL,func(coins,amount-coin)+1LL);
//             }
//         }
//         return dp[amount] = ans;
    }
                          
      int coinChange(vector<int>& coins, int amount){
          int n = size(coins);
          vector<vector<int>>dp(n,vector<int>(amount+1,-1));
          //memset(dp,-1,sizeof(dp));
          int ans =  func(n-1,coins,amount,dp);
          if(ans>=1e9)
              return -1;
          
          return ans;
      }                    
};