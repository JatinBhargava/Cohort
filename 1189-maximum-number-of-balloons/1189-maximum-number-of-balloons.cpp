class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mt;
        for(auto x:text){
            mt[x]++;
        }
        
        string given = "balloon";
        map<char,int>mb;
        for(auto x:given){
            mb[x]++;
        }
        
        int res = text.size();
        for(auto t:given)
        {
            res = min(res,mt[t]/mb[t]);
        }
        return res;
    }
};