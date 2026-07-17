class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        if(nums.empty())return 0;
        int a=nums[0];
        vector<int>prefixGcd;
        for(int i=0;i<nums.size();i++){
            a=max(a,nums[i]);
            prefixGcd.push_back(gcd(a,nums[i]));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum=0;
        int i=0;
        int j=prefixGcd.size()-1;
            while(j>i){
                sum+=gcd(prefixGcd[i],prefixGcd[j]);
                i++;
                j--;
            }
        return sum;
    }
};