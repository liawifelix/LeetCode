//Binary Prefix Divisible By 5
//Date 11 Aug 2020
//Source https://leetcode.com/problems/binary-prefix-divisible-by-5/

using namespace std;
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
		vector<bool> ans;
        long long int r=0;
		for(int i=0;i<A.size();i++)
		{
			r=(2*r+A[i])%5;
			if(r==0)
			{
				ans.push_back(true);
			}
			else
			{
				ans.push_back(false);
			}
		}
		return ans;
    }
};
