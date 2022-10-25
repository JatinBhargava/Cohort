class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mpp;
        for(auto i=0;i<s.size();i++)
        {
            mpp[s[i]] = i;
        }
        
        vector<int>ans;
        int maxi = 0;
        int prev = -1;
        
        for(auto i=0;i<s.size();i++){
            maxi = max(maxi,mpp[s[i]]);
            
            if(maxi == i){
             ans.push_back(maxi - prev);
            prev = maxi;   
            }
            
        }
        return ans;
    }
};