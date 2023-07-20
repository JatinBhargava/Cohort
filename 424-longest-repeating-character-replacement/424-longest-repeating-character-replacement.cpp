class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        map<char,int>map;
        int res = 0;        
        int maxi = 0;
        int start = 0;
        
        for(int end = 0; end < n; end++){
            
            map[s[end]]++;
            maxi = max(maxi,map[s[end]]);
            
            if((end - start + 1) - maxi > k )
            {
                map[s[start]]--;
                start++;
            }
            else
            {
                res = max(res, end - start + 1);
            }
            
        }
        return res;
    }
};

