class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>ans;
        for(auto i:nums)
        {
            ans.insert(i);
        }
        //cout << ans.size() << " " << n;
        return ans.size()==n? false:true;
    }
};