class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
        vector<int>indegree(V,0);
        vector<vector<int>>adj(V);
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(int i=0;i<adj[node].size();i++){
                int n=adj[node][i];
                indegree[n]--;
                if(indegree[n]==0){
                    q.push(n);
                }
            }
        }
        if(count==V){
            return true;
        }
        return false;
    }

};