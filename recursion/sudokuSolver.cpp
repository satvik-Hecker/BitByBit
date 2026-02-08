class Solution {
bool areRulesMet(int row,int col,int digit,vector<vector<char>>&grid){
    int sRow=(row/3)*3;
    int sCol=(col/3)*3;
    for(int i=0;i<9;i++){
        if(grid[row][i]==digit) return false;
        if(grid[i][col]==digit) return false;
        if(grid[sRow+(i/3)][sCol+(i%3)]==digit) return false;
    }
    return true;
}
bool solve(vector<vector<char>> &grid){
    int n=9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='.'){
                for(int digit='1';digit<='9';digit++){
                    if(areRulesMet(i,j,digit,grid)){
                        grid[i][j]=digit;
                        if(solve(grid)) return true;
                        grid[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};