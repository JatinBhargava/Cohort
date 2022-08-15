class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int arr[nums.size()]; 
        arr[0] = nums[0];
        
        for(int i=1;i<nums.size();i++){
            arr[i] = nums[i] + arr[i-1];
        }
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};