class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>ans;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans.push_back(word);
                word="";
            }
            else{
                 word.push_back(s[i]);
            }
        }
        ans.push_back(word);
        if(pattern.size() != ans.size()){
                  return false;
        }
        unordered_map<char,string>mp;
        unordered_map<string,char>mp1;
        for(int i=0;i<pattern.size();i++){
        if(mp.find(pattern[i])!=mp.end()){
            if(ans[i]!=mp[pattern[i]]){
            return false;
            }
        }
        else{
             mp[pattern[i]]=ans[i];
          }
        }
        for(int i=0;i<ans.size();i++){
           if(mp1.find(ans[i])!=mp1.end()){
             if(pattern[i]!=mp1[ans[i]]){
                return false;
             }
           }
        else
           mp1[ans[i]]=pattern[i];
        }
        return true;
    }
};