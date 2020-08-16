//Max Area of Island
//Date 16 Aug 2020
//Source https://leetcode.com/problems/max-area-of-island/

class Solution {
public:
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
    int helper(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& m, int a){
        a++;
        m[row][col]=1;
        int dr[4]={0,0,-1,1};
        int dc[4]={1,-1,0,0};
        for(int i=0;i<4;i++){
            if(onboard(row+dr[i],col+dc[i],grid.size(), grid[0].size())){
                if(grid[row+dr[i]][col+dc[i]]==1 && m[row+dr[i]][col+dc[i]]==0){
                    a= max(helper(row+dr[i],col+dc[i],grid,m,a),a);
                }
            }
        }
        return a;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>> m (grid.size(), vector<int> (grid[0].size(),0));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && m[i][j]==0){
                    ans= max(ans,helper(i,j,grid,m,0));
                }
            }
        }
        return ans;
    }
};
