class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int jumps=0;
        int farest=0;
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            farest=max(farest,i+nums[i]);
            if(i==j){
                jumps++;
                j=farest;
            }
        }
        return jumps;
    }
};