class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0;
        int count=piles.size()/3;
        sort(piles.begin(),piles.end(),greater<int>());
        for(int i=1;i<=piles.size() && count>0; i+=2){
            ans+=piles[i];
            count--;
        }
        return ans;
    }
};