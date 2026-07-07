class Solution {
public:
int path(int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(m<0||n<0)return INT_MAX;
    if(m==0&&n==0)return grid[m][n];
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int a=path(m-1,n,grid,dp);
    int b=path(m,n-1,grid,dp);
    int ans=min(a,b);
    if(ans==INT_MAX){
        return dp[m][n]=INT_MAX;
    }
    dp[m][n]=grid[m][n]+ans;
    return dp[m][n];
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return path(m-1,n-1,grid,dp);
    }
};