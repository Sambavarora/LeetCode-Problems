class Solution {
public:
    int ans=INT_MAX;
void dfs(int node, vector<vector<pair<int,int>>>& adj, vector<bool>& visited){
    visited[node]=true;
    for(int i=0;i<adj[node].size();i++){
        int next=adj[node][i].first;
        int wt=adj[node][i].second;
        ans=min(ans,wt);
        if(!visited[next]){
            dfs(next,adj,visited);
        }
    }
}
    int minScore(int n, vector<vector<int>>& roads) {
        vector<bool>visited(n+1,false);
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0;i<roads.size();i++){
            int u=roads[i][0];
            int v=roads[i][1];
            int w=roads[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
            dfs(1,adj,visited);
        return ans;
    }
};