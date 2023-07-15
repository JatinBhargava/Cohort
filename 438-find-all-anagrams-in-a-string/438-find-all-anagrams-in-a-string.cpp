class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        int n = s.size();
        int p_size = p.size();
        vector<int> p_count(26, 0);  // Frequency count of characters in p
        vector<int> s_count(26, 0);  // Frequency count of characters in sliding window
        
        for (char c : p) {
            p_count[c - 'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            s_count[s[i] - 'a']++;  // Add the current character to the sliding window
            
            if (i >= p_size) {
                s_count[s[i - p_size] - 'a']--;  // Remove the first character of the previous sliding window
            }
            
            if (s_count == p_count) {
                ans.push_back(i - p_size + 1);  // Add the starting index of anagram occurrence
            }
        }
        
        return ans;
    }
};
