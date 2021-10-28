class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mp;
        for(auto ele:jewels)
        {
            mp[ele]++;
        }
        int count = 0;
        
        for(auto ele:stones)
        {
            if(mp[ele])
                count++;
        }
        return count;
    }
};