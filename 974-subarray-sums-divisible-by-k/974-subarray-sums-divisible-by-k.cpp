class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        vector<int>mod(k);
        mod[0] = 1;
        int n = nums.size();
        int count = 0;
        int sum=0;
        for(int i=0;i<n;i++){
           sum = (((sum + nums[i]) % k) + k) % k;
            
            count+=mod[sum];  
            mod[sum]++;
        }
        
        return count;
        
        
    }
};

 // int cnt=0;
 //    for(int i=0;i<v.size();i++){
 //      int sum=0;
 //        for(int j=i;j<v.size();j++){
 //          sum+=v[j];
 //          if(sum%k==0)++cnt;
 //        }
 //    }