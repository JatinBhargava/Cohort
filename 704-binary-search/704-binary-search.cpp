class Solution {
public:
    int search(vector<int>& nums, int target) {
            int n = nums.size();
            int lo = 0, hg = n-1;
        
            while(lo<=hg){
                
                int mid = (lo+hg)/2;
                
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < target)
                    lo = mid+1;
                else
                    hg = mid-1;
            }
        return -1;
    }
};