class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        sort(nums[i].begin(),nums[i].end());
        
        int col = nums[0].size(); //3
        int row = nums.size(); //4
        for(int i=0;i<col;i++){
            int maxi = INT_MIN;
            for(int j=0;j<row;j++){
                maxi = max(maxi,nums[j][i]);  
            }
            // cout << maxi << " ";
            // cout << endl;
            sum+=maxi;
        }
       // cout << nums[0].size();
        return sum;
    }
};

/*
0 0 0 1 0 2
1 0 1 1 1 2
2 0 2 1 2 2    
*/