class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>unique;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            unique.insert(nums[i]);    
        }
        
        for(auto x:unique)
            cout << x;
        
        return unique.size() == nums.size() ? false:true;
    }
};