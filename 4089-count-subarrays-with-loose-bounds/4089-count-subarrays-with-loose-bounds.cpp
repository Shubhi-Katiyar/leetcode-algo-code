class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=-1;
        int right=0;
        long long count=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]<=maxK&&nums[right]>=minK){
            count+=(right-left);
              }
            else{
                left=right;
            }
        }
        return count;
    }
};