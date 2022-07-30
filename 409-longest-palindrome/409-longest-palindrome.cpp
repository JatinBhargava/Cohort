class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int count = 0;
        unordered_set<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.count(s[i]))
            {
                st.erase(s[i]);
                count++;
            }
            else
            {
                st.insert(s[i]);
            }
        }
        
        return st.empty()? count*2 : count*2 + 1;
     }
};