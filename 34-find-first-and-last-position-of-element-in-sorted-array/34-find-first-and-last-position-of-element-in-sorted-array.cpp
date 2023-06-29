class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hg = n-1;
        int start = -1, end = -1;
        
        while(lo <= hg) {
            int mid = lo + (hg - lo) / 2;
            
            if(nums[mid] == target) {
                start = mid;
                hg = mid - 1; // Continue search towards the left
            }
            else if(nums[mid] < target) {
                lo = mid + 1;
            }
            else {
                hg = mid - 1;
            }
        }
        
        lo = 0, hg = n-1; // Reset the search range
        
        while(lo <= hg) {
            int mid = lo + (hg - lo) / 2;
            
            if(nums[mid] == target) {
                end = mid;
                lo = mid + 1; // Continue search towards the right
            }
            else if(nums[mid] < target) {
                lo = mid + 1;
            }
            else {
                hg = mid - 1;
            }
        }
        
        return {start, end};
    }
};
