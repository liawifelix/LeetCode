//Surrounded Regions
//Date 26 Aug 2020
//Source https://leetcode.com/problems/surrounded-regions/

class Solution {
public:
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
    void dfs(int r,int c, vector<vector<char>>& board){
        board[r][c]='1';
        int dr[4]={0,0,-1,1};
        int dc[4]={1,-1,0,0};
        for(int i=0;i<4;i++){
            int nr= r+dr[i];
            int nc= c+dc[i];
            if(onboard(nr,nc,board.size(),board[0].size())){
                if(board[nr][nc]=='O'){
                    dfs(nr,nc,board);
                }
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0 || board[0].size()==0){
            return ;
        }
        for(int i=0;i<board.size();i++){
            if(board[i][0]=='O'){
                dfs(i,0,board);
            }
        }
        for(int i=0;i<board.size();i++){
            if(board[i][board[0].size()-1]=='O'){
                dfs(i,board[0].size()-1,board);
            }
        }
        for(int i=0;i<board[0].size();i++){
            if(board[0][i]=='O'){
                dfs(0,i,board);
            }
        }
        for(int i=0;i<board[0].size();i++){
            if(board[board.size()-1][i]=='O'){
                dfs(board.size()-1,i,board);
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='1'){
                    board[i][j]='O';
                }
                else
                {
                    board[i][j]='X';
                }
            }
        }
    }
};
