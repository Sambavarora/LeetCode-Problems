class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        vector<int>prefix(gain.size()+1);
        prefix[0]=0;
        for(int i=1;i<gain.size()+1;i++){
            prefix[i]=prefix[i-1]+gain[i-1];
            maxi=max(maxi,prefix[i]);
        }
        return maxi;
    }
};