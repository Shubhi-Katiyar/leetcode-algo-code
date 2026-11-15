class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            int diff=target-sum;
            if(abs(diff)<abs(target-ans)){
                ans=sum;
            }
            if(diff==0){
                return sum;
            }
            if(diff>0){
                left++;
            }
            else {
                right--;
            }
          }
        }  
        return ans;
    }
};