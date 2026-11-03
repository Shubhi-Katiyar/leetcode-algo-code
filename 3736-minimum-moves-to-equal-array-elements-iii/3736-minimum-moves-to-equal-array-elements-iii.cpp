class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxval=INT_MIN;
        for(int x:nums){
            maxval=max(maxval,x);
        }
        int ans=0;
        for(int x:nums){
            ans+=abs(maxval-x);
        }
        return ans;
    }
};