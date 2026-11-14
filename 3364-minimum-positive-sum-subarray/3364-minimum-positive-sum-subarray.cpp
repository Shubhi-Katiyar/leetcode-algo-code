class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int minval=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
              sum+=nums[j];
              int s=j-i+1;
              if(s>=l&&s<=r&&sum>0){
                minval=min(minval,sum);
              }
            }
        }
        if(minval==INT_MAX){
            return -1;
        }
        return minval;
    }
};