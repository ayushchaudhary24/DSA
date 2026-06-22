class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        int n = s.size();
        string primitive = "";
        if(n>0) st.push(s[0]);
        for(int i=1; i<n;i++){
            if(!st.empty()) primitive+=s[i];
            if(s[i]==')'&& st.top()=='('){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            if(st.empty()){
                primitive.pop_back();
                ans+=primitive;
                primitive = "";
            }
            
        }
        return ans;
    }
};