class Solution {
public:
void dfs(vector<vector<int>>& image, int sr, int sc,int og,int newcolor, vector<vector<bool>>&visited){
    visited[sr][sc]=true;
    image[sr][sc]=newcolor;
    vector<int> dr={-1,1,0,0};
    vector<int> dc={0,0,-1,1};
    
    for(int i=0;i<4;i++){
        int row=sr+dr[i];
        int col=sc+dc[i];
        if(row>=0&&row<imAage.size()&&col>=0&&col<image[0].size()&&!visited[row][col]&&image[row][col]==og){
            dfs(image,row,col,og,newcolor,visited);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int v=image.size();
        vector<vector<bool>>visited(v,vector<bool>(image[0].size(),false));
        int og=image[sr][sc];
            if(og==color){
                return image;
            }
                dfs(image,sr,sc,og,color,visited);        
        return image;
    }
};