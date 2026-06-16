class Solution {
public:
    string processStr(string s) {
        string si="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='*'){
            if(!si.empty())
            si.pop_back();
        }
        else if(s[i]=='#'){
            si+=si;
        }
        else if(s[i]=='%'){
            reverse(si.begin(),si.end());
        }
        else{
            si.push_back(s[i]);
        }
        
    }
    return si;
    }
};