class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size()){
            return{};
        }
        int k=p.size();
        vector<int>ans;
        vector<int>sfreq(26,0);
        vector<int>pfreq(26,0);
        for(char ch:p){
            pfreq[ch-'a']++;
        }
        for(int i=0;i<k;i++){
            sfreq[s[i]-'a']++;
        }
        if(pfreq==sfreq){
            ans.push_back(0);
        }
        for(int i=k;i<s.size();i++){
            sfreq[s[i]-'a']++;
            sfreq[s[i-k]-'a']--;
            if(pfreq==sfreq){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};