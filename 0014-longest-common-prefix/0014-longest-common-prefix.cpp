class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        string w1=strs[0];
         string ans="";
        int n1=w1.size();
        string w2=strs[1];
        int n2=w2.size();
        int i=0;
        for(i=0;i<min(n1,n2);i++){
            if(w1[i]!=w2[i]){
                break;
            }
        }
        i--;
        ans=w1.substr(0,i+1);
        for(int k=2;k<strs.size();k++){
            string word=strs[k];
            int ss=word.size();
            i=min(i,ss);
            for(int j=0;j<=i;j++){
                if(ans[j]!=word[j]){
                    i=j-1;
                    break;
                }
            }
            ans=ans.substr(0,i+1);
        }
        return ans;
    }
};