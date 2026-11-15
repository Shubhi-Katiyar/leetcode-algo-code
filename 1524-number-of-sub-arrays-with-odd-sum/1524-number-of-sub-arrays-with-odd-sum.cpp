class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    int n=arr.size();
    vector<int>prefix(n,0);
    prefix[0]=arr[0];
    int count=0;
    if(prefix[0]%2!=0){
        count++;
    }
    int mod=1e9 + 7 ;
    for(int i=1;i<n;i++){
      prefix[i]=arr[i]+prefix[i-1];
      if(prefix[i]%2!=0){
        count++;
      }
    }
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(prefix[i]%2!=0){
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