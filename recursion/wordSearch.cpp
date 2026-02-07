class Solution {
private:
bool helper(int idx, int i, int j, vector<vector<char>> &b, string &s){
    if(idx==s.size()){
        return true;
    }
    if(i<0 || j<0 || i>=b.size() || j>=b[0].size() || s[idx]!=b[i][j]) return false;
    bool ans=false;
    char x=b[i][j];
    b[i][j]=' ';
    ans|=helper(idx+1,i-1,j,b,s);
    ans|=helper(idx+1,i+1,j,b,s);
    ans|=helper(idx+1,i,j+1,b,s);
    ans|=helper(idx+1,i,j-1,b,s);
    b[i][j]=x;
    return ans;
}
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j]){
                    if(helper(0,i,j,board,word)) return true;
                }
            }
        }
        return false;
    }
};