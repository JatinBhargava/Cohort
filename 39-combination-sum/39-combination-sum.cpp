class Solution {
public:
    void findCombination(int idx,int target, vector<int>& arr, vector<vector<int>>&ans,vector<int>&ds){
        if(idx==arr.size()){
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        // picking item
        if(arr[idx]<=target)
        {
            ds.push_back(arr[idx]);
            findCombination(idx,target-arr[idx],arr,ans,ds);
            ds.pop_back();
        }
        //not picking item;
        findCombination(idx+1,target,arr,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};