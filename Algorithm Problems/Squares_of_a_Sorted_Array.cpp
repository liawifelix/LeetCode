//Squares of a Sorted Array
//Date 12 Aug 2020
//Source https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
			for(int i=0;i<A.size();i++){
				A[i]*=A[i];
			}
			sort(A.begin(), A.end());
			return A;
    }
};