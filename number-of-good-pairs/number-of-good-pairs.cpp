class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        
       for(int ele : nums) 
           map[ele]++;
        
        int count = 0;
        
        for(int ele : nums){
            if(map[ele] > 1)
            {
              count =count +  (map[ele] * (map[ele]-1))/2;
              map[ele]=0;
            } 
        }
        return count;
    }
};