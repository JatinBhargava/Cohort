class Solution {
public:
    int f(int m, int n,vector<vector<int>>&dp){
        if(m<0 or n<0)
            return 0;
        if(m==0 or n==0)
            return 1;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        return dp[m][n] =  f(m-1,n,dp) + f(m,n-1,dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp);
    }
};