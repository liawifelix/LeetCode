//Path Crossing
//Date 18 Aug 2020
//Source https://leetcode.com/problems/path-crossing/

class Solution {
public:
    bool isPathCrossing(string path) {
		int row=0, col=0;
		map<pair<int,int>,int> m;
		m[{row,col}]=1;
        for(int i=0;i<path.length();i++){
			if(path[i]=='N'){
				row--;
			}
			else if(path[i]=='W'){
				col--;
			}
			else if(path[i]=='E'){
				col++;
			}
			else if(path[i]=='S'){
				row++;
			}
			if(m[{row,col}]==1)
				return true;
			m[{row,col}]=1;
		}
		return false;
    }
};
