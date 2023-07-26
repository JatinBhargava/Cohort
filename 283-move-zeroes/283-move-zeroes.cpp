class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();

        int low = 0;
        
        for(int right = 0; right<n; right++){
            if(nums[right] != 0 ){
                swap(nums[low],nums[right]); 
                low++;
            }
        }
    }
};