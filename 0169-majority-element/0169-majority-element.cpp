class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int exist=nums[0];
        for(int i=0;i<nums.size();i++ ){
            if(count==0){
                exist=nums[i];
            }
             if(nums[i]==exist){
                count++;
            }
            else{
                count--;
            }
        }
        return exist;
    }
};