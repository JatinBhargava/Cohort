class Solution {
public:
    int strStr(string haystack, string needle) {
        
     int j=0,n=0;
        for(int i=0;i<haystack.length();i++){
            j=0;
            n=i;
            while(j<needle.size() && n<haystack.size() && haystack[n]==needle[j])
            {
                n++;
                j++;
            }
            if(j==needle.size())
                return n-(needle.size());   
        }
       return -1;  
    }
};