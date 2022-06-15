class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 ,j = 0, n = s.size(), ans = 0 ;
        unordered_set<char>st;
        while(i<n && j<n)
        {
            if(st.find(s[j])==st.end())
            {
                st.insert(s[j++]);
                ans = max(ans,j-i);        
            }
            else
            {
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};