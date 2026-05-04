class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(256,0);
        int left=0;
        int start=0;
        int minlen=INT_MAX;
        int required=t.size();
        for(char c:t){
            freq[c]++;
        }
        for(int right=0;right<s.size();right++){
            char current=s[right];
            if(freq[current]>0){
                required--;
            }
            freq[current]--;
            while(required==0){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0){
                    required++;
                }
            left++;
            }
        }
        if(minlen == INT_MAX) return "";
        return s.substr(start, minlen);
    }
};