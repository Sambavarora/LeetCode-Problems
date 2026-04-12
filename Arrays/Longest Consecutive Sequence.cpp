class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>mp;
      int ans=0;
      for(int i=0;i<nums.size();i++){
        mp.insert(nums[i]);
      }
      for(auto it :mp){
        if(mp.find(it-1)==mp.end()){
            int current=it;
            int len=1;
            while(mp.find(current+1)!=mp.end()){
            len++;
            current++;
            }
            ans=max(ans,len);
        }
      }
      return ans;        
    }
};