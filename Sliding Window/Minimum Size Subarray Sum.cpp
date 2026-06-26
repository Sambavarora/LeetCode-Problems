
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int sum=0;
        // int count=INT_MAX;
        // int left=0;
        // for(int right=0;right<nums.size();right++){
        //     sum+=nums[right];
        
        // while(sum>=target){
        //     count=min(count,right-left+1);
        //     sum-=nums[left];
        //     left++;
        // }
        
        // }
        // if(count==INT_MAX)return 0;
        // return count;
        class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int result=INT_MAX;
        int sum=0;
        while(high<nums.size()){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                result=min(result,len);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
        if(result==INT_MAX) return 0;
        return result;
    }
};
    }
};