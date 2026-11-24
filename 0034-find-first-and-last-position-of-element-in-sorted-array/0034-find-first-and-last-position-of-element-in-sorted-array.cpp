class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstocc(nums,target);
        int last=lastocc(nums,target);
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
    int firstocc(vector<int>&nums,int target){
        int st=0;
        int n=nums.size();
        int end=n-1;
        int f=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                f=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return f;
   }
    int lastocc(vector<int>&nums,int target){
        int st=0;
        int n=nums.size();
        int end=n-1;
        int l=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                l=mid;
                st=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return l;
    }
};

 

