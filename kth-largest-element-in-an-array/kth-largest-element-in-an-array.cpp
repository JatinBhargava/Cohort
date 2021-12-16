class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int lar = INT_MIN;
        int i = 0;
        while(k--)
        {
            lar = nums[i];
            i++;
        }
        return lar;
        
    }
    
};