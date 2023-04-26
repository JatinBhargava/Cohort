class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        // vector usin pair then sort
//         vector<pair<int,int>>vp;
//         for(auto x:mp)
//         {
//             vp.push_back({x.first,x.second});
//         }
        
//         sort(vp.begin(),vp.end());
        
        //instead use priority queue
        // priority_queue<pair<int,int>> pq; 
        // for(auto it = map.begin(); it != map.end(); it++){
        //     pq.push(make_pair(it->second, it->first));
        //     if(pq.size() > (int)map.size() - k){
        //         res.push_back(pq.top().second);
        //         pq.pop();
        //     }
        // }
        
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
             if(pq.size() > mp.size() - k)
             {
                 ans.push_back(pq.top().second);
                 pq.pop();
             }
        }
        return ans;
    }
};