class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it :mp){
            if(it.second.size()>=3){
                vector<int>&ans=it.second;
                for(int i=0;i+2<ans.size();i++){
                    int dist=2*(ans[i+2]-ans[i]);
                    res=min(res,dist);
                }
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        else{
            return res;
        }
    }
};