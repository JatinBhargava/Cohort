class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int right[nums.size()];
        right[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            right[i] = nums[i] + right[i-1];
        }
        
        int left[nums.size()];
        left[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            left[i] = nums[i] + left[i+1];
        }
        
        for(int i=0;i<nums.size();i++){
            if(right[i] == left[i])
            {
                return i;
            }
        }
        return -1;
    }
};