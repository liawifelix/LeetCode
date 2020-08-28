//Sudoku Solver
//Date 28 Aug 2020
//Source https://leetcode.com/problems/sudoku-solver/

class Solution {
public:
	char ch[9]={'1','2','3','4','5','6','7','8','9'};
	bool possible(char ch, int r, int c, vector<vector<char>>& board){
		for(int i=0;i<9;i++){
			if(board[r][i]==ch || board[i][c]==ch)
				return false;
		}
		int row= r/3;
		int col= c/3;
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				if(board[i+row*3][j+col*3]==ch)
					return false;
		return true;
	}
	bool done(vector<vector<char>>& board){
		for(int i=board.size()-1;i>=0;i--){
			for(int j=board[0].size()-1;j>=0;j--){
				if(board[i][j]=='.'){
					return false;
				}
			}
		}
		return true;
	}
	bool solve(vector<vector<char>>& board){
		if(done(board))
			return true;
		bool s=false;
		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[0].size();j++){
				if(board[i][j]=='.'){
					for(int k=0;k<9;k++){
						if(possible(ch[k],i,j,board)){
							board[i][j]=ch[k];
							
							if(solve(board)){
								s=true;
								return true;
							}
							else{
								board[i][j]='.';
							}
						}
					}
					if(!s)
						return false;
				}
			}
		}
		return false;
	}
    void solveSudoku(vector<vector<char>>& board) {
		solve(board);
    }
};
