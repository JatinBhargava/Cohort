class Solution {
public:
    void helper(int ind,vector<int>& candidates, int target ,vector<int>&ans,vector<vector<int>>&ds)
    {
            if(target == 0){
                ds.push_back({ans});
                return;
            }
                for(int i=ind;i<candidates.size();i++)
                {
                    if(i>ind && candidates[i] == candidates[i-1]) continue;
                    if(candidates[i]>target) break;
                    ans.push_back(candidates[i]);
                    helper(i+1,candidates,target-candidates[i],ans,ds);
                    ans.pop_back();
                }
           
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end()); 
        vector<vector<int>>ds;
        vector<int>ans;
        helper(0,candidates,target,ans,ds);
        return ds;
    }
};