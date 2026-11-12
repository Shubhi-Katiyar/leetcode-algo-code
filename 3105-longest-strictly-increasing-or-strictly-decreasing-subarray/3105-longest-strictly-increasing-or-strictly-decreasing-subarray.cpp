class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int maxlen=0;
        for(int i=0;i<n-1;i++){
          if(nums[i]<nums[i+1]){
            count++;
          }
          else{
            count=1;
          }
          maxlen=max(maxlen,count);
        }
        count=1;
        for(int i=0;i<n-1;i++){
         if(nums[i]>nums[i+1]){
            count++;
         }
         else{
            count=1;
         }
         maxlen=max(maxlen,count);
        }
      return maxlen;
    }
};