class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        
        int left = 0; // Left pointer for the sliding window
        int sum = 0;  // Current sum of elements in the window
        
        for (int right = 0; right < n; right++) {
            sum += nums[right]; // Expand the window by adding the right element
            
            // Shrink the window from the left until the sum is less than the target
            while (sum >= target) {
                mini = min(mini, right - left + 1);
                sum -= nums[left]; // Remove the leftmost element from the window
                left++; // Move the left pointer to the right
            }
        }
        
        return mini == INT_MAX ? 0 : mini;
    }
};
