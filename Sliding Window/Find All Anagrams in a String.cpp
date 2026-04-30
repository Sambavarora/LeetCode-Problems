class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left=0;
        vector<int>freq(26,0);
        vector<int>freq2(26,0);
        vector<int>ans;
        int k=p.size();
        for(char c : p){
    freq2[c - 'a']++;
}
        for(int right=0;right<s.size();right++){
            freq[s[right]-'a']++;
            if(right-left+1>k){
                freq[s[left]-'a']--;
                left++;
            }
            if(right-left+1==k){
                if(freq2==freq){
                    ans.push_back(left);
                }
            }
            
        }
        return ans;
    }
};