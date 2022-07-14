class Solution {
public:
    int f(vector<int>& nums,int idx, int target, int sum){
        if(idx<0 && target==sum)
            return 1;
        if(idx < 0)
            return 0;
        
        //if(dp[idx]!=-1)
        //    return dp[idx];
        
        int pos = f(nums,idx-1,target,sum + nums[idx]);
        int neg = f(nums,idx-1,target,sum - nums[idx]);
            
        return pos+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        //vector<int>dp(n,-1);
        return f(nums,n-1,target,0);
    }
};