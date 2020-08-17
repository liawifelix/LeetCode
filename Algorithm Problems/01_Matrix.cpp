//01 Matrix
//Date 17 Aug 2020
//Source https://leetcode.com/problems/01-matrix/

class Solution {
public:
    bool onboard(int row, int col, int sr, int sc){
        if(row>=0 && row<sr && col>=0 && col<sc)
            return true;
        return false;
    }
    
    void bfs(int row, int col, vector<vector<int>> &matrix){
        queue <pair<pair<int,int>,int>> q;
        map<pair<int,int>,int> m;
        m[{row,col}]=1;
        q.push({{row,col},0});
        while(!q.empty()){
            int r= q.front().first.first;
            int c= q.front().first.second;
            int n= q.front().second;
            q.pop();
            if(matrix[r][c]==0){
                matrix[row][col]=n;
                return;
            }
            int dr[4]={0,0,-1,1};
            int dc[4]={1,-1,0,0};
            for(int i=0;i<4;i++){
                int nr= r+dr[i];
                int nc= c+dc[i];
                if(onboard(nr,nc,matrix.size(),matrix[0].size())){
                    if(m[{nr,nc}]==0){
                        m[{nr,nc}]=1;
                        q.push({{nr,nc},n+1});
                    }
                }
            }
        }
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix){
        int dr[4]={0,0,-1,1};
        int dc[4]={1,-1,0,0};
        int sr= matrix.size();
        int sc= matrix[0].size();
        for(int i=0;i<sr;i++){
            for(int j=0;j<sc;j++){
                if(matrix[i][j]!=0){
                    bfs(i,j,matrix);
                }
            }
        }
        return matrix;
    }
};
