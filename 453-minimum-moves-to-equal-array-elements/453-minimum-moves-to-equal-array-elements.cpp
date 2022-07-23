class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n =size(nums);
        int mini = INT_MAX;
        for(auto x:nums)
        {
            mini = min(x,mini);
        }
        
        int sum = 0;
        for(auto ele:nums)
        {
            sum+= ele-mini;
        }
        
        return sum;
    }
};