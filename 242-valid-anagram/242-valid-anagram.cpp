class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
        
       int n = s.size(),m = t.size();
        
       if(n!=m) return false;
        
//        for(int i=0,j=0;i<n,j<m;i++,j++){
//                if(s[i++]==t[j++])
//                    continue;
//                else
//                    return false;
//            }
        return s==t;
    }
};