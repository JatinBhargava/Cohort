class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long sum=0;
        long cnt=0;
        int j=0;

        
        for(;j<k;j++){
            sum+=arr[j];
        }
        if(sum/k>=threshold)
        cnt++;
        
        
        int i=0;
        while(j<arr.size()){
            sum-=arr[i++];
            sum+=arr[j++];
            if(sum/k>=threshold)
            cnt++;
        }
        return cnt;
    }
};