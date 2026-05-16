class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int current=0;
        for(int i=0;i<sentences.size();i++){
            int count=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            current=max(current,count+1);
        }
        return current;
    }
};