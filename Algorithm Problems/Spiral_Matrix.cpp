//Spiral Matrix
//2 Sept 2020
//Source https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    map<pair<int,int>,int> m;
    vector<int> res;
    int dr[4]={0,1,0,-1};
    int dc[4]={1,0,-1,0};
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
    void helper(int i, int r, int c, vector<vector<int>>& matrix){
        res.push_back(matrix[r][c]);
        int nr= r+ dr[i];
        int nc= c+ dc[i];
        if(onboard(nr,nc,matrix.size(),matrix[0].size()) && m[{nr,nc}]==1){
            m[{nr,nc}]=0;
            helper(i,nr,nc,matrix);
        }
        else if(m[{r,c+1}]==0 && m[{r+1,c}]==0 && m[{r,c-1}]==0 && m[{r-1,c}]==0){
            return;
        }
        else
        {
            i++;
            if(i==4){
                i=0;
            }
            int nr= r+ dr[i];
            int nc= c+ dc[i];
            if(onboard(nr,nc,matrix.size(),matrix[0].size()) && m[{nr,nc}]==1){
                m[{nr,nc}]=0;
                helper(i,nr,nc,matrix);
            }
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0)
            return res;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                m[{i,j}]=1;
            }
        }
        m[{0,0}]=0;
        helper(0,0,0,matrix);
        return res;
    }
};
