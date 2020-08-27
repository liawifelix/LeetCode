//Detect Cycles in 2D Grid
//Date 27 Aug 2020
//Source https://leetcode.com/problems/detect-cycles-in-2d-grid/

class Solution {
public:
    int row=0;
	int col=0;
	bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
	bool helper(int r, int c, vector<vector<char>>& grid, map<pair<int,int>,int> &m, int pr, int pc){
		int dr[4]={0,0,-1,1};
        int dc[4]={1,-1,0,0};
		m[{r,c}]=1;
		for(int i=0;i<4;i++){
			int nr= dr[i]+r;
			int nc= dc[i]+c;
			if(onboard(nr,nc,grid.size(),grid[0].size()) && 
			grid[r][c]==grid[nr][nc] && 
			!(pr==nr && pc==nc)){
				if(m[{nr,nc}]==1){
					return true;
				}
				else{
					if(helper(nr,nc, grid, m, r, c))
						return true;
				}
			}
		}
		return false;
	}
    bool containsCycle(vector<vector<char>>& grid) {
        row= grid.size();
		col= grid[0].size();
		map<pair<int,int>,int>m;
			
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(m[{i,j}]==0){
					if(helper(i,j,grid,m,-1,-1)){
						cout<<i<< " "<< j<<endl;
						return true;
					}
				}
            }
        }
		return false;
    }
};
