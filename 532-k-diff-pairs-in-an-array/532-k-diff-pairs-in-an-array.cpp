class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto x:nums)
            mpp[x]++;
        
        int count = 0;
        for(auto ele:mpp)
        {
             if(k==0) {
                if(ele.second>1) 
                    count++;
            }
            
             else {
                 if (mpp.find(ele.first - k) != mpp.end()) 
                     count++;
             }
        }
        return count;
    }
};