class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch's alogrithm
        // sort 0,1,2
        
        //if 1 in mid -> left untouch
       int start = 0 , mid = 0, end = nums.size()-1;
        
        while(mid <= end){
            
            if(nums[mid] == 0)
                swap(nums[start++],nums[mid++]);
            else if(nums[mid] == 1)
                mid++;
            else
                swap(nums[mid],nums[end--]);
        }
    }
};