class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        int lowdig=to_string(low).size();
        int highdig=to_string(high).size();
        vector<int>ans;
        for(int i=lowdig;i<=highdig;i++){
            for(int j=0;j+i<=9;j++){
                string t=s.substr(j,i);
                int num=stoi(t);
            if(num>=low && num<=high){
            ans.push_back(num);
            }
            }
        }
        return ans;
    }
};