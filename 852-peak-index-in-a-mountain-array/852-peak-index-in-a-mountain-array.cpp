class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
        int n = nums.size();
        int lo = 1,hg=n-2;
        
        if(nums[0] > nums[1])
            return 0;
        if(nums[n-1] > nums[n-2])
            return n-1;
        
        while(lo<=hg){
            int mid = (lo+hg)/2;
            
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            
            else if(nums[mid] > nums[mid-1])
            {
                lo = mid+1;
            }
            else
                hg = mid-1;
        }
        return -1;
    }
};