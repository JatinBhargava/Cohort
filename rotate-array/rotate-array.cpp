class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int>numscopy(n);
        for(int i=0;i<n;i++){
            numscopy[i] = nums[i];
        }
        
        
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n] = numscopy[i];
        }
    }
};

/*
 for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = numsCopy[i];
            }
*/            