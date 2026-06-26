class Solution {
public:
bool dfs(int source,int destination,vector<vector<int>>&adj,int n,vector<bool>&visited){
    if(source==destination){
        return true;
    }
    visited[source]=true;
    for(int i=0;i<adj[source].size();i++){
        int neighbour=adj[source][i];
        if(!visited[neighbour]){
            if(dfs(neighbour,destination,adj,n,visited))return true;
            
        }
    }
    return false;
}

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n,false);  
        return dfs(source,destination,adj,n,visited);
    }
    
};