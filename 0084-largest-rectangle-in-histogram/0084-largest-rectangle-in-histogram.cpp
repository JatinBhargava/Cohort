class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;

        // store index of array
        stack<int> stack;
        int leftsmall[n], rightsmall[n];

        for (int i = 0; i < n; i++) {
            while (!stack.empty() && heights[stack.top()] >= heights[i])
                stack.pop();

            if (stack.empty())
                leftsmall[i] = 0;
            else
                leftsmall[i] = stack.top() + 1;

            stack.push(i);
        }

        while (!stack.empty())
            stack.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!stack.empty() && heights[stack.top()] >= heights[i])
                stack.pop();

            if (stack.empty())
                rightsmall[i] = n - 1;
            else
                rightsmall[i] = stack.top() - 1;

            stack.push(i);
        }

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, (rightsmall[i] - leftsmall[i] + 1) * heights[i]);
        }
        return maxi;
    }
};
