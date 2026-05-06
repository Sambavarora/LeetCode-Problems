class Solution {
public:
    int maxPower(string s) {
        int count=1;
        int maxlen=1;
        for(int right=1;right<s.size();right++){
            if(s[right]==s[right-1]){
                count++;
            }
            else{
                count=1;
            }
            maxlen=max(maxlen,count);
        }
        return maxlen;
    }
};