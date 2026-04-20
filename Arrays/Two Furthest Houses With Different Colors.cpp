class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int dist=0;
        int i=0;
        for(int j=colors.size()-1;j>=0;j--){
            if(colors[i]!=colors[j]){
                dist=max(dist,j-i);
                break;
            }
        }
        for(int k=0;k<colors.size();k++){
            if(colors[colors.size()-1]!=colors[k]){
                dist=max(dist,(int)(colors.size()-1-k));
                break;
            }
        }
        return dist;
    }
};