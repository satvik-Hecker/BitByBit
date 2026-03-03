class Solution {
private:
void dfs(int r, int c, vector<vector<bool>> &vis, vector<vector<char>> &grid){
    vis[r][c]=1;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            int nrow=r+i;
            int ncol=c+j;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1'){
                dfs(nrow,ncol,vis,grid);
            }
        }
    } 
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int cnt=0;
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int row=0 ; row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    dfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};