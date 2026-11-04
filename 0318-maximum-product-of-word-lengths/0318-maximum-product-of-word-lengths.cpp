class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        int maxval=0;
        for(int i=0;i<n;i++){
            string word=words[i];
            set<char>st;
            for(char ch : word){
                st.insert(ch);
            }
            for(int j=i+1;j<n;j++){
               string s=words[j];
               int k=0;
               for( k=0;k<s.size();k++){
                if(st.find(s[k])!=st.end()){
                    break;
                }
               }
               if(k==s.size()){
                int length=word.size()*s.size();
                maxval=max(maxval,length);
               }
            }
        }
        return maxval;
    }
};