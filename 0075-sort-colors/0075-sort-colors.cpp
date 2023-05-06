class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch's alogrithm
        // sort 0,1,2
        
        //if 1 in mid -> left untouch
        int lo = 0;
        int mid = 0;
        int hg = nums.size()-1;
        
        while(mid <=hg)
        {
            if(nums[mid] == 0)
                swap(nums[lo++],nums[mid++]);
            else if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid],nums[hg--]);
        }
        
    }
};