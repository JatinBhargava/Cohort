class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int current = nums[i];
            if(mp.find(current)!=mp.end() && i - mp[nums[i]] <=k)
            {
                return true;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return false;
    }
};