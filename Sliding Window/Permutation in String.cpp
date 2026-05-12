class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();

        vector<int>freq(26,0),freq1(26,0);

        if(s2.size()<s1.size())return false;

        for(int i=0;i<k;i++){
            freq[s1[i]-'a']++;
        }

        int low=0;
        int high=k-1;

        for(int i=low;i<=high;i++){
            freq1[s2[i]-'a']++;
        }

        while(high<s2.size()-1){
            if(freq==freq1)return true;
            freq1[s2[low]-'a']--;
            low++;
            high++;
            freq1[s2[high]-'a']++;
        }

        if(freq==freq1)return true;
        return false;
    }
};