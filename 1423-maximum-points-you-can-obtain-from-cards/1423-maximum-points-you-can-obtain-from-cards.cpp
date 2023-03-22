class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        
        int l=0, r = n- k;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        if(n == k)
            return sum;
        
        int temp = n-k;
        int ans = INT_MIN;
        int window = 0;
        for(int i=0;i<temp - 1;i++){
            window+=nums[i];
        }
        
        for(int i=n-k-1;i<n;i++){
            window+=nums[i];
            ans = max(ans,sum-window);
            window-=nums[i - (n-k-1)];
        }
       
        return ans;
    }
};