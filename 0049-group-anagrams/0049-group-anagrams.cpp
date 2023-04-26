class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto t:strs){
            string s = t;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        
        vector<vector<string>>ans;
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};