class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count = 0;
       int n = nums.size();
       map<int,int>sum;
       int add = 0; 
       sum[0]++;
       for(int i=0;i<n;i++){
           add+=nums[i];
           count+=sum[add-k];
           sum[add]++;
       } 
        return count;
    }
};