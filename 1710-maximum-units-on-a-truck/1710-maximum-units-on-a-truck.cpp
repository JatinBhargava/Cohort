class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](auto&a, auto&b){
            return a[1] > b[1];
        });
            
           int totalUnits = 0;
        for (auto& box : boxTypes) {
            // Take as many boxes until we're out of space on the truck
            // or we're out of boxes of this type
            int numBoxes = min(truckSize, box[0]);
            totalUnits += numBoxes * box[1];
            truckSize -= numBoxes;
        }
        return totalUnits;
    }
};