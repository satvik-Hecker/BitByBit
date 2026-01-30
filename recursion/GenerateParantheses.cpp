class Solution {
private:
void helper(int open, int close, string s, vector<string> &ans,int n){
    if(open==close && (open + close)==2*n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        helper(open+1,close,s+'(',ans,n);
    }
    if(open>close){
        helper(open,close+1,s+')',ans,n);
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0,0,"",ans,n);
        return ans;
    }
};