class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix_sum[n];
        
            
        prefix_sum[0] = nums[0];
        
        for(int i=1;i<n;i++){
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }
        
        unordered_map<int,int>mpp;
        // for(auto x:prefix_sum)
        // {
        //     mpp[x]++;
        // }
        
        int curr_sum = 0,cnt=0; 
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            if(curr_sum==k)
                cnt++;
            
            if(mpp.count(curr_sum-k))
                cnt+=mpp[curr_sum-k];
            
            mpp[curr_sum]++;
        }
        return cnt;
    }
};