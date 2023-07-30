class Solution {
public:
    int trap(vector<int>& height) {
    
        int n = height.size();

        vector<int>prefix(n);
        vector<int>suffix(n);

        for(int i=1;i<n;i++)
            prefix[i] = max(prefix[i-1],height[i-1]);
        
        for(int i=n-2;i>=0;i--)
            suffix[i] = max(suffix[i+1],height[i+1]);

        int ans = 0;
        for(int i=0;i<n;i++){
            int waterlevel = min(prefix[i],suffix[i]);
            if(waterlevel >= height[i])
                ans += waterlevel - height[i];
        }

        return ans;
    }
};