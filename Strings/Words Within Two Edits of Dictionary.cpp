class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                int edit=0;
                for(int k=0;k<queries[i].size();k++){
                    if(dictionary[j][k]!=queries[i][k]){
                    edit++;
                    }
                    if(edit>2){
                    break;
                    }
                }
                if(edit<=2){
                    ans.push_back(queries[i]);
                    break;
                }
                
            }
            
        }
        return ans;
    }
};