//Number of Islands
//Date 16 Aug 2020
//Source https://leetcode.com/problems/number-of-islands/

class Solution {
public:
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
    
    void helper(int row, int col, vector<vector<char>>&grid){
        grid[row][col]='*';
        int dr[4]={0,0,-1,1};
        int dc[4]={1,-1,0,0};
        for(int i=0;i<4;i++){
            if(onboard(row+dr[i], col+dc[i], grid.size(), grid[0].size())){
                if(grid[row+dr[i]][col+dc[i]]!='0' && grid[row+dr[i]][col+dc[i]]!='*'){
                    helper(row+dr[i], col+dc[i],grid);
                }
            }
        }
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!='0' && grid[i][j]!='*'){
                    ans++;
                    helper(i,j,grid);
                }
            }
        }
        return ans;
    }
};
