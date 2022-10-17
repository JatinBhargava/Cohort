class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int idx = 0, sum = 0;
        for(int i=0;i<n;i++){
            idx+=i;
            sum+=arr[i];
            
            if(idx==sum)
                ans++;
        }
        
            return ans;
        
    }
};