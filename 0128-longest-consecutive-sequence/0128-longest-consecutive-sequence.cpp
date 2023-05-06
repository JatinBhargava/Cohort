class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>unique;
        for(auto x:nums)
            unique.insert(x);
        
        vector<int>new_nums(unique.begin(),unique.end());
        
        if(new_nums.size() == 0)
            return 0;
        
        if(new_nums.size() == 1)
            return 1;
        
        sort(new_nums.begin(),new_nums.end());
        
        int maxi = INT_MIN;
        int count = 1;
        for(int i=1;i<new_nums.size();i++){
            if(new_nums[i] - new_nums[i-1] == 1)
                count++;
            else
                count = 1;
            
            maxi = max(maxi,count);
        }
            return maxi;
    }
};