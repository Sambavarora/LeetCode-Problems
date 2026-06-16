class Solution {
public:
void dfs(int start,vector<bool>&visited,vector<vector<int>>& isConnected){
    visited[start]=true;
    int V=isConnected.size();
for(int i=0;i<V;i++){
        if(isConnected[start][i]==1&&!visited[i]){
            dfs(i,visited,isConnected);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {  
    int V=isConnected.size();
    vector<bool>visited(V,false);
    int count=0;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(i,visited,isConnected);
            count+=1;
        }
    }
    return count;
    }
};