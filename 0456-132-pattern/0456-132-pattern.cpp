class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> stack;
        int second = INT_MIN; // Initialize the potential 'nums[k]' (second element)

        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < second) {
                return true; // Found a valid 132 pattern
            }

            while (!stack.empty() && nums[i] > stack.top()) {
                second = stack.top(); // Update the potential 'nums[k]' candidate
                stack.pop();
            }

            stack.push(nums[i]);
        }

        return false; // No valid 132 pattern found
    }
};
