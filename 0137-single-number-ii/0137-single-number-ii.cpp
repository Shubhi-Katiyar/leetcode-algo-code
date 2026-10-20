class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int x:nums){
            mp[x]++;
        }
        for(auto &p:mp){
            if(p.second==1){
                ans=p.first;
                break;
            }
        }
      return ans;
    }
};