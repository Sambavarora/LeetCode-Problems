class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        // list<int>smaller;
        // list<int>larger;
        // list<int>same;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<pivot){
        //         smaller.push_back(nums[i]);
        //     }
        //     else if(nums[i]==pivot){
        //         same.push_back(nums[i]);
        //     }
        //     else{
        //         larger.push_back(nums[i]);
        //     }
        // }
        // nums.clear();
        // for(int i:smaller)nums.push_back(i);
        // for(int i:same)nums.push_back(i);
        // for(int i:larger)nums.push_back(i);
            
        // return nums;
    }
};