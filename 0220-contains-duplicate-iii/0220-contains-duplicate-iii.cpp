class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        
        int n = nums.size();
        set<int> set(nums.begin(),nums.end());
        if(valueDiff == 0 and n == set.size())
            return false; 
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(i-j) <= indexDiff and abs(nums[i] - nums[j]) <= valueDiff){
                    return true;
                }
            }
        }
        return false;
    }
};