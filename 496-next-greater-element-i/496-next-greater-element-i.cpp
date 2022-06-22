class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums2) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : nums1) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};

/*
     int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j])
                {
                    flag=true;
                }
                if(flag && nums1[i]<nums2[j])
                {
                    ans.push_back(nums2[j]);
                    flag=false;
                    break;
                }
            }
         if(flag)
             ans.push_back(-1);
        }   
        return ans;
*/        