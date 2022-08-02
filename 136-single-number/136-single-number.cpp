class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int>mpp;
        for(auto x:nums)
            mpp[x]++;
        
        for(auto ele:mpp)
        {
            if(ele.second == 1)
                return ele.first;
        }
        
        return -1;
    }
};