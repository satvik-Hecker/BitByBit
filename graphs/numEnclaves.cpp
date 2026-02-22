class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||j==0||i==n-1||j==m-1) && grid[i][j]){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        vector<int> dR={-1,0,1,0};
        vector<int> dC={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nR=r+dR[i];
                int nC=c+dC[i];
                if(nR>=0 && nC>=0 && nR<n && nC<m && !vis[nR][nC] && grid[nR][nC]){
                    q.push({nR,nC});
                    vis[nR][nC]=1;
                }
            }

        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1) cnt++;
            }
        }
        return cnt;
    }
};  