class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.first==target){
                return true;
            }
        }
        return false;
    }
};