class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();

        int mini = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int start = i+1;
            int end = n-1;
            int newTarget = target - nums[i];

            while(start < end){
                int sum = nums[start] + nums[end];
                 mini = abs(mini)>abs(sum-newTarget) ? sum-newTarget : mini;
                if(sum < newTarget)
                    start++;
                else
                    end--;
            }
        }
        return target + mini;
    }
};