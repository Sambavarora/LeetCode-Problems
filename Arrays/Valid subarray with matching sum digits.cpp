class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        long long count=0;
        vector<long long>prefix(nums.size()+1,0);
        prefix[0]=0;
        for(int i=0;i<nums.size();i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                long long sum=prefix[j+1]-prefix[i];
                if(sum%10!=x){
                    continue;
                }
                long long temp=sum;
                while(temp>=10){
                    temp/=10;
                }
                if(temp==x){
                    count++;
                }
            }
        }
        return count;
    }
};