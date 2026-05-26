class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if(islower(it.first)){
                if(mp.count(toupper(it.first))){
                    count++;
                }
            }
        }
        return count;
    }
};