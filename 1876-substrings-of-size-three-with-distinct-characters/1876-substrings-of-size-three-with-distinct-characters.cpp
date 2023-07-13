class Solution {
public:
    int countGoodSubstrings(string s) {
     
       int n = s.size();
       set<char>set;
       int count = 0; 
        
       for(int i=0;i<n-2;i++){
           set.clear();
           for(int j=i;j<i+3;j++){
               set.insert(s[j]);
           }
           if(set.size() == 3)
               count++;
       } 
        return count;
    }
};