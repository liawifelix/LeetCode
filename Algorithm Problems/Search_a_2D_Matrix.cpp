//Search a 2D Matrix
//Date 18 Aug 2020
//Source https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool found(vector<int>& arr, int t){
        int idx= arr.size();
        int lo=0;
        int hi=idx;
        while(lo<hi){
            int mid= (hi+lo)/2;
            if(arr[mid]>t){
                hi= mid;
            }
            else{
                lo= mid+1;
            }
        }
        if(arr[lo-1]==t)
            return true;
        return false;
	}
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
			if(row==0)
				return false;
			int col= matrix[0].size();
			if(col==0)
				return false;
			
			for(int i=0;i<row;i++){
				if(matrix[i][0]<=target && target<=matrix[i][col-1]){
					if(found(matrix[i], target))
						return true;
				}
			}
		return false;
    }
};
