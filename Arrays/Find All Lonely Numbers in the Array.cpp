class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1&&mp.find(it.first-1)==mp.end() && mp.find(it.first+1)==mp.end()){
                    ans.push_back(it.first);
            }
        }
        return ans;
    }
};