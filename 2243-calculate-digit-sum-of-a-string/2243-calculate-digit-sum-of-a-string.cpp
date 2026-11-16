class Solution {
public:
string ans="";
   void calculate(string str,int k){
        int n=str.size();
        if(n<=k){
            ans=str;
            return;
        }
        int m=k;
        string st="";
        int i=0;
        while(i<n){
             int sum=0;
            while(k>0&&i<n){
                sum+=str[i]-'0';
                i++;
                k--;
            }
            st+=to_string(sum);
            k=m;
        }
       calculate(st,m);
    }
    string digitSum(string s, int k) {
         calculate(s,k);
         return ans;
    }
};