class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_set<int>s;
        for(auto x:nums)
        {
            s.insert(x);
        }
        
        for(auto x:nums)
        {
            if(s.find(target)==s.end())
                return false;
        }
        return true;
    }
};