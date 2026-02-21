class Solution {
private:
void dfs(int r, int c, int curr, int newC, vector<vector<int>> &ans, vector<vector<int>> image, vector<int> delRow, vector<int> delCol){
    int n=image.size();
    int m=image[0].size();
    ans[r][c]=newC;
    for(int i=0;i<4;i++){
        int a=r+delRow[i];
        int b = c+ delCol[i];
        if(a>=0 && a<n && b>=0 && b<m && image[a][b]==curr && ans[a][b]!=newC){
            dfs(a,b,curr,newC,ans,image,delRow,delCol);
        }
    }
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<int> dR= {-1,0,1,0};
        vector<int> dC= {0,-1,0,1};
        vector<vector<int>> ans=image;
        int curr=image[sr][sc];
        if(curr==color) return image;
        dfs(sr,sc,curr,color,ans,image,dR,dC);
        return ans;
    }
};