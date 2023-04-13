class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m = needle.size();
        
        int i=0;
         for (int j = 0; j < haystack.length(); j++) {
        if (haystack[j] == needle[i])
            i++;
        else {
            j -= i;
            i = 0;
        }
        if (i == needle.length()) {
            return j - i + 1;
            break;
        }
    }
        return -1;
    }
};