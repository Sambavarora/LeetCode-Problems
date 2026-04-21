class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        int max=0;
        for(auto it:mp){
            if(ans==it.second){
                max+=it.second;
            }
        }
        return max;
    }
};