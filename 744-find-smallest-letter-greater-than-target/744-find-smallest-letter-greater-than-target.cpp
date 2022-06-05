class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int lo = 0 , high = n-1;
        if(letters[n-1]<=target || target < letters[0])
            return letters[0];
        
        while(lo+1<high){
            int mid = lo + (high-lo)/2;
            if(letters[mid]>target)
                {
                high = mid;
                }
            else
                lo = mid;
        }
        return letters[high];
    }
};

