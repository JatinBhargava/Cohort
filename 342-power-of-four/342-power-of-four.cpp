class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        else if(n%4==0 and isPowerOfFour(n/4))
            return true;
        
        return false;
    }
};