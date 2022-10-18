class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        
        int ans = 0;
        for(int i=0;i<n;i++){
            //operations[0],[1],[2]
            if(operations[i] == "--X")
                --ans;
            else if(operations[i] == "X++")
                ans++;
            else if(operations[i] == "++X")
                ++ans;
            else if(operations[i] == "X--")
                ans--;
        }
        return ans;
    }
};