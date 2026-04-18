class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int pref=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            pref+=nums[i];
            if(mp.find(pref-k)!=mp.end()){
                count+=mp[pref-k];
            }
            mp[pref]++;
        }
        return count;
        // for(int i=0;i<nums.size();i++){
        //    int sum=0;
        //    for(int j=i;j<nums.size();j++){
        //     sum+=nums[j];
        //     if(sum==k){
        //     count++;
        //    }
        //    }
        // }
    }
};



