class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        int prefixProduct[n];
        int suffixProduct[n];
        vector<int>pro(n);
        
        prefixProduct[0] = 1;
        for(int i=1;i<n;i++){
            prefixProduct[i] = nums[i-1] * prefixProduct[i-1];
        }
        
        suffixProduct[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            suffixProduct[i] = nums[i+1] * suffixProduct[i+1];
        }
        
        for(int i=0;i<n;i++){
            pro[i] = prefixProduct[i] * suffixProduct[i];
        }
        
        return pro;
    }
};