#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cal=std::gcd(nums[0],nums.back());
        return cal;
    }
};
int main(){
    Solution solution;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<solution.findGCD(nums);
    return 0;
}