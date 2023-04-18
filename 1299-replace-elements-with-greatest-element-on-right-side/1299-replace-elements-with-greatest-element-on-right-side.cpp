class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        
        int maxi = -1;
        vector<int>new_arr(n);
        for(int i=n-2;i>=0;i--){
            maxi = max(maxi,arr[i+1]);
            new_arr[i] = maxi;
        }
        
        new_arr[n-1] = -1;
        return new_arr;
    }
};