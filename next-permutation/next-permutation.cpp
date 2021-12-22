class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      next_permutation(begin(nums),end(nums));
    }
};

/*
  int n = nums.size();
        for(int i = n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                swap(nums[i],nums[i-1]);
                break;
            }
            else{
                reverse(nums.begin(),nums.end());
                }
            }    
*/            