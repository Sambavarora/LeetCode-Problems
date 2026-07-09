class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<jewels.size();i++){
            mp1[jewels[i]]++;
        }
        for(int i=0;i<stones.size();i++){
            mp2[stones[i]]++;
        }
        int count=0;
        for(auto it:mp1){
            count+=mp2[it.first];
        }
        return count;
    }
};