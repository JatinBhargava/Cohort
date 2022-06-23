class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        rev(s,0,s.size()-1);
    }
    
    void rev(vector<char>& s,int i, int j){
        
    if (i >= j)
            return;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        rev(s, i+1, j-1);
    }
};