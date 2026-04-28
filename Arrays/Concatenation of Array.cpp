class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int>ans=nums;
        // ans.insert(ans.end(),nums.begin(),nums.end());
        // return ans;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
        
    }
};