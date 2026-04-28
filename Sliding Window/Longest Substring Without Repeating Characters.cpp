class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int count=0;
        vector<int>freq(256,0);
        for(int right=0;right<s.size();right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            count=max(count,right-left+1);
        }
        return count;
    }
};