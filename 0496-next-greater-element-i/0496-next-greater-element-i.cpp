class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();

        map<int,int>map;
        map[nums2[n-1]] = -1;
        vector<int>ans;

        for(int i=0;i<n-1;i++){
            int maxi = nums2[i];
            for(int j=i+1;j<n;j++){
                if(nums2[j] > maxi){
                    maxi = nums2[j];
                    break;
                }
            }
            map[nums2[i]] = maxi;
            if(map[nums2[i]] == nums2[i])
                map[nums2[i]] = -1;
        }

        for(auto x:nums1)
        {
            if(map.find(x) != map.end())
                ans.push_back(map[x]);
        }
        return ans;
    }
};