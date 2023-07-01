class Solution {
public:
    int numberofDays(vector<int>& weights, int capicity){
        int days = 1, load = 0,sum = 0;
        
        
        int n = weights.size();
        
        
        for(int i=0;i<n;i++){
            if(load + weights[i] > capicity)
            {
                days+=1;
                load = weights[i];
            }
            else
            {
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum = 0;
        for(auto x:weights)
            sum += x;
        
        int maxi = *max_element(weights.begin(),weights.end());
        
        int low = maxi, high = sum;
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            
            int noD = numberofDays(weights,mid);
            
             if(noD <= days){
                 high = mid-1;
             }
             else{
                 low = mid+1;
             }   
        }
        return low;
    }
};