class Solution {
public:
    vector<vector<int>>dp;
int path(int m, int n){
    if(m==0||n==0)return 0;
    if(m==1&&n==1)return 1;
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int a=path(m-1,n);
    int b=path(m,n-1);
    dp[m][n]=a+b;
    return dp[m][n];
}
    int uniquePaths(int m, int n) {
      dp.resize(m+1 ,vector<int>(n+1,-1));
      return path(m,n);
    }
};