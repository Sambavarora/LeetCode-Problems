class Solution {
public:
void dfs(int row,int col,vector<vector<char>>&grid,vector<vector<bool>>&visited){
    visited[row][col]=true;
    vector<int>dr={0,0,-1,1};
    vector<int>dc={1,-1,0,0};
    for(int i=0;i<4;i++){
        int newrow=row+dr[i];
        int newcol=col+dc[i];
        if(newrow>=0&&newrow<grid.size()&&newcol>=0&&newcol<grid[0].size()&&!visited[newrow][newcol]&&grid[newrow][newcol]=='1'){
            dfs(newrow,newcol,grid,visited);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())return 0;
        int count=0;
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<bool>>visited(rows,vector<bool>(cols,false));
        for(int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if(!visited[row][col]&&grid[row][col]=='1'){
                count++;
                dfs(row,col,grid,visited);
                }
            }
        }
        return count;
    }
};