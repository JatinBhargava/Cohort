class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.count(target-nums[i]))
                return {i,mpp[target-nums[i]]};
            else
                mpp[nums[i]] = i;
        }
        
        return {-1,-1};
    }
};





























/*
        
        int n = nums.size();
        
        unordered_map<int,int>mpp;
        for(int i=0;i<n;++i){
            int a = nums[i], b = target - a;
            if(mpp.count(b))
                return {mpp[b],i};
             mpp[a] = i;
        }
         return {-1,-1};
*/         