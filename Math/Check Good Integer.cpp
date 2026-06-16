class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int square=0;
        int calc=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
            int digit=s[i]-'0';
            square+=digit*digit;
        }
        calc=square-sum;
        if(calc>=50){
            return true;
        }
        return false;
    }
};