class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int res = INT_MIN;
        
        for(int i=0;i<cols;i++){
            vector<int>sums(rows,0);
            for(int j=i;j<cols;j++){
                for(int k=0;k<rows;k++){
                    sums[k] += matrix[k][j];
                }
                
                set<int>accSet;
                
                accSet.insert(0);
                
                int curSum = 0, curMax = INT_MIN;
                for(int sum:sums){
                    curSum += sum;
                set<int>::iterator it = accSet.lower_bound(curSum - k);
                if (it != accSet.end()) curMax = std::max(curMax, curSum - *it);
                accSet.insert(curSum);        
                }
                res = max(res,curMax);
            }
        }
        return res;
    }
};