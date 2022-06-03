class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>>ans;
        perm(0,nums,ans);
        return ans;
    }
    
    void perm(int pos,vector<int>& nums,vector<vector<int>>&ans) {
        
     if(pos>=nums.size()) {
         ans.push_back(nums);
     }  
        
      for(int i=pos;i<nums.size();i++){
          swap(nums[i],nums[pos]);
          perm(pos+1,nums,ans);
          swap(nums[pos],nums[i]);
      }  
    }  
};