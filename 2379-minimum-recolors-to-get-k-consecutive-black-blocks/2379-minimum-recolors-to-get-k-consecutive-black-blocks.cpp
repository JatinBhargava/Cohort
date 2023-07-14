class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        int n = blocks.size();
        int mini = INT_MAX;
        
        for(int i=0;i<n-k+1;i++){
            int xnt = 0;
            for(int j=i;j<i+k;j++){
                if(blocks[j] == 'W')
                    xnt++;
            }
            mini = min(mini,xnt);
        }
        return mini;
    }
};