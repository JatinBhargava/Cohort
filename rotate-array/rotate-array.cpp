class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      vector<int>set1;
      vector<int>set2;
      reverse(nums.begin(),nums.end());
      int n = nums.size();   
        
        k = k%nums.size();
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
       
    }
};