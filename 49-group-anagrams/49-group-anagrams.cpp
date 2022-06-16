class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        string temp;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        
        vector<vector<string>>res;
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};