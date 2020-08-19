//Longest Turbulent Subarray
//Date 19 Aug 2020
//Source https://leetcode.com/problems/longest-turbulent-subarray/

class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int dp[A.size()];
		dp[0]=1;
		int nmax=1;
		bool incr;
		if(A.size()>1){
			if(A[0]==A[1]){
				dp[1]=1;
			}
			else{
				dp[1]=2;
				nmax=2;
				if(A[0]<A[1])
					incr= true;
				else
					incr= false;
			}	
		}
		for(int i=2;i<A.size();i++){
			if(A[i-1]<A[i] && incr==true){
				dp[i-1]=1;
				dp[i]=2;
			}
			else if(A[i-1]<A[i] && incr==false){
				incr= true;
				dp[i]=dp[i-1]+1;
				nmax= max(nmax,dp[i]);
			}
			else if(A[i-1]>A[i] && incr==false){
				dp[i-1]=1;
				dp[i]=2;
			}
			else if(A[i-1]>A[i] && incr==true){
				incr= false;
				dp[i]=dp[i-1]+1;
				nmax= max(nmax,dp[i]);
			}
			else if(A[i-1]==A[i]){
				dp[i]=1;
			}
		}
		return nmax;
    }
};
