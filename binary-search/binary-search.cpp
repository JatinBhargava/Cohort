class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int n = nums.size()-1;
        int s = 0, e =n;
        while(s<=e)
        {
            mid = s + (e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
              s = mid+1;
            }
            else if(nums[mid]>target)
            {
              e = mid-1;    
            }
        }
        return -1;
    }
};