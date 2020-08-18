//Queens That Can Attack the King
//Date 18 Aug 2020
//Source https://leetcode.com/problems/queens-that-can-attack-the-king/

class Solution {
public:
	bool onboard(int r, int c){
		if(r>=0 && r<8 && c>=0 && c<8)
			return true;
		return false;
	}
	
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
		map<pair<int,int>,int> m;
		vector<vector<int>> res;
		for(int i=0;i<queens.size();i++){
			m[{queens[i][0],queens[i][1]}]=1;
		}
		int dr[8]= {0, 0,1,1, 1,-1,-1,-1};
		int dc[8]= {1,-1,0,1,-1, 0,-1, 1};
		int rk= king[0];
		int ck= king[1];
		for(int i=0;i<8;i++){
			int nrk= rk+dr[i];
			int nck= ck+dc[i];
			while(onboard(nrk,nck)){
				if(m[{nrk,nck}]==1){
					res.push_back({nrk,nck});
					break;
				}
				nrk= nrk+dr[i];
				nck= nck+dc[i];
			}
		}
		return res;
    }
};
