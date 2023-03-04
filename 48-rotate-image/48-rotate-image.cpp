class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int left = 0,right = matrix.size()-1;
        
        while(left < right){
            for(int i=0;i<abs(left - right);i++){
                int top = left , bottom = right;
                
                int temp = matrix[top][left+i];
                
                matrix[top][left+i] = matrix[bottom-i][left];
                
                matrix[bottom-i][left] = matrix[bottom][right-i];
                
                matrix[bottom][right-i] = matrix[top+i][right];
                
                matrix[top+i][right] = temp;
            }
            left++;
            right--;
        }
    }
};