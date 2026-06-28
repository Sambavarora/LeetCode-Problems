class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long curr=mul;
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=1LL * nums[i]* max(1LL,curr);
            curr--;
        }
        return sum;
    }
};