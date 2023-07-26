class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n = t.size();
        int low = 0;
        string str = "";
        
        for(int i=0; i<n; i++){
            
            if(t[i] == s[low]){
                str+=t[i];
                low++;
            }
            else
                continue;
        }
        
        cout << str << " ";
        return str.size() == s.size()? true:false;
    }
};