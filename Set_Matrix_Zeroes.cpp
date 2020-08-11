//Set Matrix Zeroes
//Date 11 Aug 2020
//Source https://leetcode.com/problems/set-matrix-zeroes/

#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
		vector<int>row;
		vector<int>col;
		
		for(int i=0;i<matrix.size();i++){
			for(int j=0;j<matrix[0].size();j++){
				if(matrix[i][j]==0){
					row.push_back(i);
					col.push_back(j);
				}
			}
		}	
		
		for(int i=0;i<matrix.size();i++){
			for(int k=0;k<col.size();k++)
			{
				matrix[i][col[k]]=0;
			}
		}	
        for(int k=0;k<row.size();k++)
        {
            for(int i=0;i<matrix[0].size();i++){
			    matrix[row[k]][i]=0;
		    }	    
        }
    }
};