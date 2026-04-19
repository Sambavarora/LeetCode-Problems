class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int currentdiff=0;
        int maxdiff=0;
        for(int i=1;i<nums.size();i++){
            currentdiff=nums[i]-nums[i-1];
            maxdiff=max(maxdiff,currentdiff);
        }
        return maxdiff;
    }
};