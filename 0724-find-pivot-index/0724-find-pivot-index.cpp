class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int left[nums.size()];
        int right[nums.size()];
        //left to right sum
        left[0] = nums[0];
        for(int i=1;i<nums.size();i++)
            left[i]=nums[i]+left[i-1]; 
        
        //right to left sum
        right[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
            right[i]=nums[i]+right[i+1];
     
        
        for(int i=0;i<nums.size();i++){
            if(left[i]==right[i])
            {
                return i;
                break;
            }
        }
        
        return -1;
    }
};