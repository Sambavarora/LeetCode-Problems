class Solution {
public:
    string tobinary( int num){
        string res="";
        if (num==0)return "0";
        while(num>0){
            res=char((num%2)+'0')+res;
            num/=2;
        }
        return res;
    }
    string convertDateToBinary(string date) {
        vector<string>parts;
        stringstream ss(date);
        string temp;
        while(getline(ss,temp,'-')){
            parts.push_back(temp);
        }
        string result="";
        for(int i=0;i<parts.size();i++){
            int num=stoi(parts[i]);
            string bin=tobinary(num);
            result+=bin;
            if(i!=parts.size()-1){
                result+='-';
            }
        }
        return result;
    }
};