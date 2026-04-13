class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>an;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            an.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(an.find(i)==an.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};