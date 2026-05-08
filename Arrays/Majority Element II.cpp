class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cal=nums.size()/3;
        for(auto it:mp){
            if(it.second>cal){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};