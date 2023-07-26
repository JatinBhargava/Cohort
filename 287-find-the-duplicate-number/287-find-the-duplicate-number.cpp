class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        
        for(auto it:mpp)
        {
            if(it.second > 1)
                return it.first;
        }
        return -1;
    }
};