class Solution {
private:
    void solve(string &digits, vector<string>&ans, string &temp, int idx, vector<string> &mapping){

        if(idx >= digits.size()){
            ans.push_back(temp);
            return;
        }

        int num = digits[idx] - '0';
        string s = mapping[num];

        for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
            solve(digits,ans,temp,idx+1,mapping);
            temp.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string temp;
        if(digits.size() == 0)
            return ans;
        vector<string> mapping = {
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        solve(digits,ans,temp,0,mapping);
        return ans;

    }
};