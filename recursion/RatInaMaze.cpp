class Solution{
    private:
    void helper(int i, int j, string path, vector<string>&ans, vector<vector<int>>&grid){
        if(i==grid.size()-1 && j==grid.size()-1){
            ans.push_back(path);
            return;
        }
        grid[i][j]=0;
        if(i-1>=0 && grid[i-1][j]==1){
            helper(i-1,j,path+"U",ans,grid);
        }
        if(j+1<grid.size() && grid[i][j+1]==1){
            helper(i,j+1,path+"R",ans,grid);
        }
        if(j-1>=0 && grid[i][j-1]==1){
            helper(i,j-1,path+"L",ans,grid);
        }
        if(i+1<grid.size() && grid[i+1][j]==1){
            helper(i+1,j,path+"D",ans,grid);
        }
        grid[i][j]=1;
    }
    public:
    vector<string> findPath(vector<vector<int> > &grid) {
        int n=grid.size();
        vector<string> ans;
        //your code goes here
        if(grid[0][0]==0 || grid[n-1][n-1]==0) return ans;
        helper(0,0,"",ans,grid);
        return ans;
    }
};