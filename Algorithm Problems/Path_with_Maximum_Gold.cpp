//Path with Maximum Gold
//Date 13 Aug 2020
//Source https://leetcode.com/problems/path-with-maximum-gold/

class Solution {
public:
		int row, col;
		int dr[4]= {1,-1, 0, 0};
		int dc[4]= {0, 0, 1,-1};
		
		bool onboard(int r, int c){
			if(r>=0 && c>=0 && r<row && c<col)
				return true;
			return false;
		}
		
		int helper(int r, int c, vector<vector<int>>& grid){
			int res=0;
			int temp;
			int ctemp;
			ctemp= grid[r][c];
			grid[r][c]=0;
			for(int i=0;i<4;i++){
				if(onboard(r+dr[i],c+dc[i])){
					if(grid[r+dr[i]][c+dc[i]]!=0){
						temp=grid[r+dr[i]][c+dc[i]];
						grid[r+dr[i]][c+dc[i]]=0;
						res= max(res,helper(r+dr[i],c+dc[i],grid)+temp);
						grid[r+dr[i]][c+dc[i]]=temp;
					}
				}
			}
			grid[r][c]=ctemp;
			return res;
		}
		
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
				row= grid.size();
				col= grid[0].size();
				
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						if(grid[i][j]!=0){
							ans= max(ans,helper(i,j,grid)+grid[i][j]);
						}
					}
				}
				return ans;
    }
};