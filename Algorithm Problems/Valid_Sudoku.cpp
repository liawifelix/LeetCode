//Valid Sudoku
//Date 14 Aug 2020
//Source https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool ninecell(vector<vector<char>>& board){
        
        for(int i=0;i<3;i++){
            for(int q=0;q<3;q++){
                int arr[10]={0};
                for(int j=i*3;j<=i*3+2;j++){
                    for(int k=q*3;k<=q*3+2;k++){
                        if(board[j][k]!='.'){
                            arr[(int)board[j][k]-48]++;
                            if(arr[(int)board[j][k]-48]>1)
                                return false;
                        }
                    }
                }
            }
        }
    
        return true;
    }

    bool checkverhor(int row, int col,vector<vector<char>>& board){
        char me= board[row][col];
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==me && i!=col){
                return false;
            }
            if(board[i][col]==me && i!=row){
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.'){
                    if(!checkverhor(i,j,board))
                        return false;
                }
            }
        }
        if(!ninecell(board))
            return false;
        return true;
    }
};
