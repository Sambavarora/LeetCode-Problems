class Solution {
public:
vector<int>dp;
int solve(vector<int>& coins, int amount){
    int mini=INT_MAX;
    if(amount==0)return 0;
    if(amount<0)return -1;
    if(dp[amount]!=-2){
        return dp[amount];
    }
    for(int i=0;i<coins.size();i++){
        int ans=solve(coins,amount-coins[i]);
        if(ans!=-1){
        mini=min(mini,ans+1);
        }
    }
        return dp[amount]=(mini==INT_MAX?-1:mini);
}
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount+1,-2);
        return solve(coins,amount);
    }
};
