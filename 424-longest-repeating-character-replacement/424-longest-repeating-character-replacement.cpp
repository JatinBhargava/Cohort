class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        map<char, int> charCount;
        int res = 0;
        int maxRepeatCharCount = 0;
        
        for (int i = 0, j = 0; j < n; j++) {
            charCount[s[j]]++;
            maxRepeatCharCount = max(maxRepeatCharCount, charCount[s[j]]);
            
            // If the number of replacements needed is greater than k,
            // move the left pointer and decrease the count of the character
            // at the left end of the window.
            if ((j - i + 1) - maxRepeatCharCount > k) {
                charCount[s[i]]--;
                i++;
            }
            
            // Update the result with the maximum window size seen so far.
            res = max(res, j - i + 1);
        }
        
        return res;
    }
};
