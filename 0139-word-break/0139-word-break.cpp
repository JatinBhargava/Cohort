class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        int m = wordDict.size();

        vector<bool> dp(n + 1, false);  // dp[i] indicates if s[0...i-1] can be segmented
        
        dp[0] = true;  // An empty string can always be segmented
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < m; ++j) {
                int wordLen = wordDict[j].size();
                if (i >= wordLen && s.substr(i - wordLen, wordLen) == wordDict[j]) {
                    dp[i] = dp[i] || dp[i - wordLen];
                }
            }
        }

        return dp[n];  // Return whether the entire string can be segmented
    }
};
