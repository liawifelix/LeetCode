//Word Search
//Date 26 Aug 2020
//Source https://leetcode.com/problems/word-search/

class Solution {
public:
    bool onboard(int r, int c, int row, int col){
        if(r>=0 && c>=0 && r<row && c<col)
            return true;
        return false;
	  }
    bool dfs(int r,int c, vector<vector<char>>& board, string word){
        int dr[4]= {1,-1, 0, 0};
		int dc[4]= {0, 0, 1,-1};
        if(word.length()==0)
            return true;
        char t= word[0];
        for(int i=0;i<4;i++){
            int nr= r+ dr[i];
            int nc= c+ dc[i];
            if(onboard(nr,nc,board.size(),board[0].size())){
                if(board[nr][nc]==t){
                    board[nr][nc]='0';
                    if(dfs(nr,nc,board,word.substr(1,word.length()-1)))
                        return true;
                    board[nr][nc]=t;
                }
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    board[i][j]='0';
                    if(dfs(i, j, board, word.substr(1,word.length()-1)))
                        return true;
                    board[i][j]=word[0];
                }
            }
        }
        return false;
    }
};
