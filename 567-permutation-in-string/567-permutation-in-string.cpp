#include <unordered_map>

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        // Create a frequency map for characters in s1
        unordered_map<char, int> targetFreq;
        for (char c : s1) {
            targetFreq[c]++;
        }

        // Sliding window and frequency map for the current window in s2
        unordered_map<char, int> currentFreq;

        // Initialize the frequency map for the first window
        for (int i = 0; i < n; i++) {
            currentFreq[s2[i]]++;
        }

        // Check if the first window contains a permutation of s1
        if (currentFreq == targetFreq) return true;

        // Slide the window through s2 and update the frequency map
        for (int i = n; i < m; i++) {
            // Remove the leftmost character from the window
            if (--currentFreq[s2[i - n]] == 0) {
                currentFreq.erase(s2[i - n]);
            }
            // Add the rightmost character to the window
            currentFreq[s2[i]]++;

            // Check if the current window contains a permutation of s1
            if (currentFreq == targetFreq) return true;
        }

        return false;
    }
};
