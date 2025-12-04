class Solution {
public:
    bool isMatched(char o, char c){
        if((o=='(' && c==')') ||
           (o=='[' && c==']') ||
           (o=='{' && c=='}')
        ){
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' ){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                char top=st.top();
                st.pop();
                if(!isMatched(top,s[i])){
                    return false;
                }
            }
        }
        return st.empty();
    }
};