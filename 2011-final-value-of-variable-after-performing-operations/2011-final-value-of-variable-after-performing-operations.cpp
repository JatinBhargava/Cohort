class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        
        int ans = 0;
        for(auto op:operations){
            //operations[0],[1],[2]
          if(op[1] == '-')
              ans--;
          else
              ans++;
            
        }
        return ans;
    }
};