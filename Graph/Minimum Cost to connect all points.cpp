class Solution {
public:

int mincost(vector<int>&cost,vector<bool>&visited,int v){
    int minimumcost=INT_MAX;
    int minindex=-1;
    for(int i=0;i<v;i++){
        if(!visited[i]&&cost[i]<minimumcost){
            minimumcost=cost[i];
            minindex=i;
        }
    }
    return minindex;
}
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v=points.size();
        vector<int>cost(v,INT_MAX);
        vector<bool>visited(v,false);
        cost[0]=0;
        
        for(int i=0;i<v-1;i++){
            int u=mincost(cost,visited,v);
            visited[u]=true;
            for(int j=0;j<v;j++){
                int weight=abs(points[u][0]-points[j][0])+abs(points[u][1] - points[j][1]);
                if(!visited[j]&&weight<cost[j]){
                    cost[j]=weight;
                }
            }
        }
        int total=0;
        for(int i=0;i<cost.size();i++){
            total+=cost[i];
        }
        return total;
    }
};