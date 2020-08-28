//N-Queens II
//Date 28 Aug 2020
//Source https://leetcode.com/problems/n-queens-ii/

class Solution {
public:
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
	bool safe(int r, int c, vector<vector<int>>m){
		int dr[8]= {0, 0,1,1, 1,-1,-1,-1};
		int dc[8]= {1,-1,0,1,-1, 0,-1, 1};
		for(int i=0;i<8;i++){
			int nr= r+dr[i];
			int nc= c+dc[i];
			while(onboard(nr,nc,m.size(),m.size())){
				if(m[nr][nc]==1){
					return false;
				}
				nr= nr+dr[i];
				nc= nc+dc[i];
			}
		}
		return true;
	}
	bool done(vector<vector<int>>m){
		int t=0;
		for(int i=0;i<m.size();i++){
			for(int j=0;j<m.size();j++)
				t+=m[i][j];
		}
		if(t==m.size())
			return true;
		return false;
	}
	void helper(int r, vector<vector<int>> &m,  vector<vector<string>> &res){
		if(done(m)){
			//insert
			string s;
			vector<string> ss;
			for(int k=0;k<m.size();k++){
				for(int j=0;j<m.size();j++){
					s+=(m[k][j]==1 ?'Q': '.');
				}
				ss.push_back(s);
				s="";
			}
			res.push_back(ss);
		}
		else{
			for(int i=0;i<m.size();i++){
				if(safe(r,i,m)){
					m[r][i]=1;
					helper(r+1,m, res);
					m[r][i]=0;
				}
			}
		}
	}
    int totalNQueens(int n) {
        vector<vector<string>> res;
		for(int i=0;i<n;i++){
			vector<vector<int>>v (n,vector<int> (n,0));
			v[0][i]=1;
			helper(1, v, res);
		}
		return res.size();
    }
};
