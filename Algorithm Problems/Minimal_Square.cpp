//Minimal Square
//Date 20 Aug 2020
//Source https://leetcode.com/problems/maximal-square/

class Solution {
public:
    int helper(int sr, int sc, vector<vector<char>> &matrix){
        int ans=1;
        for(int i=sr+1;i<matrix.size();i++){
            if(matrix[i][sc]=='1'){
                int l= i-sr+1;
                for(int r= sr; r<sr+l; r++){
                    for(int c= sc; c<sc+l; c++){
                        if(r<matrix.size() && c<matrix[0].size()){
                            if(matrix[r][c]!='1'){
                                return ans;
                            }
                        }
                        else{
                            return ans;
                        }
                    }
                }
                ans= max(ans, l*l);
            }
            else{
                return ans;
            }
        }
        return ans;
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans=0;
        if(matrix.size()==0 || matrix[0].size()==0)
            return 0;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    if(ans==0)
                        ans=1;
                    ans= max(ans, helper(i, j, matrix));
                }
            }
        }
        return ans;
    }
};
