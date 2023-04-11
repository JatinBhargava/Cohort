class Solution {
public: 
    bool is_pallin(string s,int i,int j){
        while(i<j){
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i<j){
            if(s[i] == s[j])
                i++,j--;
            else
               return  is_pallin(s,i+1,j) || is_pallin(s,i,j-1);
        }
        return true;
    }
};