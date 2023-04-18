class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>second_nums(2*n);    
        for(int i=0;i<2*n;i++){
            second_nums[i] = nums[i%n];
        }
        
        return second_nums;
    }
};