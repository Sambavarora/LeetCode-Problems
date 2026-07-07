class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string a="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                a.push_back(s[i]);
            }
        }
        if (a.empty())return 0;
        long long sum=0;
        long long ans=stoll(a);
        for(int i=0;i<a.size();i++){
            sum+=a[i]-'0';
        }
        return ans*sum;
    }
};