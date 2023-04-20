class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        int i = 0;
        int n = strs.size();
        string len = "";
        string first = strs[0];
        string last = strs[n-1]; 
        while(i<strs[0].size() and i< strs[n-1].size()){
            if(first[i] == last[i])
                len+=first[i];
            else
                break;
            i++;
        }    
        return len;
    }
};