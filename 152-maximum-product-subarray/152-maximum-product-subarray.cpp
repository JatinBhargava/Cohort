class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        //left -> right find maxi pro 
        int maxiPro = INT_MIN;
        int pro = 1;
        for(int i=0;i<n;i++){
            pro*=nums[i];
            maxiPro = max(maxiPro,pro);
            
            if(nums[i] == 0)
                pro = 1;
        }
        
        //right -> left find maxi pro 
        int prod=1;
        
        for(int i=n-1;i>=0;i--)
        {
          prod*=nums[i];

          maxiPro=max(prod,maxiPro);
            
          if(prod==0)
           prod=1;
        }
        
        //which ever is maximum return that
        return maxiPro;
    }
};