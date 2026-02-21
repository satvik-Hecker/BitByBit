class Solution{
    void dfs(int node,vector<vector<int>> adj,vector<int> &vis){
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    int numProvinces(vector<vector<int>> adj) {
       int n = adj.size();
       vector<vector<int>> adjL(n);
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==1 && i!=j){
                adjL[i].push_back(j);
                adjL[j].push_back(i);
            }
        }
       }
       vector<int> vis(n,0);
       int cnt=0;
       for(int i=0;i<n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adjL,vis);
        }
       }
       return cnt;
    }
};
