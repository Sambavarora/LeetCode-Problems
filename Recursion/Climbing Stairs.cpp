class Solution {
public:
vector<int>dp;
int climb(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    if(dp[n]!=-1){
        return dp[n];
    }
    int a=climb(n-1);
    int b=climb(n-2);
    dp[n]=a+b;
    
    return dp[n];

}
    int climbStairs(int n) {
        dp.resize(n+1,-1);
        return climb(n);
     }
};