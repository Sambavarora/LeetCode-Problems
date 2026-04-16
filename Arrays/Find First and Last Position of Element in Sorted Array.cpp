class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last =-1;
        for(int i=0,j=nums.size()-1;i<nums.size()&&j>=0;i++,j--){
            if(nums[i]==target&&first==-1){
                first =i;
            }
            if(nums[j]==target&&last==-1){
                last=j;
            }
        }
        return {first,last};
    }
};