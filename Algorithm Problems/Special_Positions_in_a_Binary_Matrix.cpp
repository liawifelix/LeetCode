//Special Positions in a Binary Matrix
//Date 13 sept 2020
//Source https://leetcode.com/problems/special-positions-in-a-binary-matrix/

class Solution {
public:
    bool check(vector<vector<int>>&m, int r, int c){
        int t=0;
        for(int i=0;i<m[0].size();i++){
            t+=m[r][i];
        }
        if(t!=1)
            return false;
        t=0;
        for(int i=0;i<m.size();i++){
            t+=m[i][c];
        }
        if(t!=1)
            return false;
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    if(check(mat, i, j))
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
