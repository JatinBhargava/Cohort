class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        // int start = intervals[0][0];
        // int end = intervals[0][1];
        ans.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= ans.back()[1]){
                ans.back()[1] = max(intervals[i][1],ans.back()[1]);
            }
            else
                ans.push_back(intervals[i]);
        }
        return ans;
    }
};

// if(output.back()[1] >= intervals[i][0]) 
//     output.back()[1] = max(output.back()[1] , intervals[i][1]);
// else output.push_back(intervals[i]); 