class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
         // Left -> right
         vector<int>pro(n,1);
         int temp = 1;
         //vector<int>ans;
         for(int i=0;i<n;i++){
             pro[i] = temp;
             temp*=nums[i];
         }
        
         temp=1;
        for(int i=n-1;i>=0;i--){
             pro[i]*= temp;
             temp*=nums[i];
        }
        
        return pro;
    }
};