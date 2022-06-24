// bool comp(pair<int,int>a, pair<int,int>b)
// {
//     return a.second<b.second;
// }    

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
         for(auto x:nums)
             mp[x]++;
        
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
            if(pq.size()>mp.size()-k)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        
//         sort(ans.begin(),ans.end(),comp);
        
//         vector<int>res;
//         while(k--)
//         {
//             for(auto x:ans)
//                 ans.push_back(x.first);
//         }
        return ans;
    }
};