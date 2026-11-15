class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    int n=arr.size();
    int count1=0;
    int count2=0;
    int count=0;
    int prefix=0;
    int mod=1e9 + 7 ;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        if(prefix%2!=0){
            count++;
            count=(count+count2)%mod;
            count1++;
        }
        else{
            count=(count+count1)%mod;
            count2++;
        }
    }
    
    return count;
    }
};