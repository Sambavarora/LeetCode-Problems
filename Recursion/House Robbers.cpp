class Solution {
public:
int k(int i,vector<int>&nums,vector<int>&dp){
    if(i>=nums.size())return 0;
    if(dp[i] !=-1){
        return dp[i];
    }
    int pick=nums[i]+k(i+2,nums,dp);
    int notpick=k(i+1,nums,dp);
    return dp[i]=max(pick,notpick);
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return k(0,nums,dp);
    }
};