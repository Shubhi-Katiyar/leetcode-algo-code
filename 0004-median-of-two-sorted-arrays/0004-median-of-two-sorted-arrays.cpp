class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i++]);
        }
        while(j<m){
            ans.push_back(nums2[j++]);
        }
        int k=ans.size();
        int mid=k/2;
        if(k%2!=0){
          return ans[mid];
        }
        return double(ans[mid-1]+ans[mid])/2;
    }
};