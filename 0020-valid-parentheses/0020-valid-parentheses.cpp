class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(char x:s){
        if(!st.empty() &&(st.top()=='('&& x==')'||st.top()=='[' && x==']'|| st.top()=='{'&& x=='}')){
            st.pop();
        }
        else{
            st.push(x);
        }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};