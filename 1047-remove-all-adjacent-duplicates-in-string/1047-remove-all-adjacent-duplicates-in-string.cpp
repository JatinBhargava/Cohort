class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        string ans;
        
        for(auto x:s){
            if(ans.back()==x)
                ans.pop_back();
            else
                ans.push_back(x);
        }
        return ans;
    }
};