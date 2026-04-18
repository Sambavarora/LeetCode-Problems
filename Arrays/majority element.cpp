class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int occur =1;
        // int maxoccur =1;
        // int ele= nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         occur++;
        //     }
        //     else{
        //         occur=1;
        //     }
        //     if(occur>maxoccur){
        //         maxoccur=occur;
        //         ele=nums[i];
        //     }
        // }
        // return ele;
        unordered_map<int,int>mp;
        int maxresult=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }  
        for(auto it:mp){
            if(it.second>maxresult){
                maxresult=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};