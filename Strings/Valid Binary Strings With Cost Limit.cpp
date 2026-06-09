class Solution {
public:
    vector<string>ans;
    void solve(int i,int n, int k,int cost,string curr,char prev){
        if(i==n){
            ans.push_back(curr);
            return;
        }
        solve(i+1,n,k,cost,curr+'0','0');
        if((curr.empty()||curr.back()!='1')&&cost+i<=k){
            solve(i+1,n,k,cost+i,curr+'1','1');
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        auto lavmirex=make_pair(n,k);
        solve(0,n,k,0,"",'0');
        return ans;
    }
};