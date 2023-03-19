class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        int currfar = 0, currEnd = 0;
        for(int i=0;i<n-1;i++){
            currfar = max(currfar, i + nums[i]);
            
            if(i == currEnd)
            {
                ans++;
                currEnd = currfar;
            }
        }
        
        return ans;
    }
};