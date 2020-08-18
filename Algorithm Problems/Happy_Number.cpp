//Happy Number
//Date 18 Aug 2020
//Source https://leetcode.com/problems/happy-number/

class Solution {
public:
	int helper(int n){
		int total=0;
		while(n>0){
			total= total+ (n%10)*(n%10); 
			n=n/10;
		}
		return total;
	}
    bool isHappy(int num) {
		map<int,int> m;
		while(num>1 && m[num]!=1){
			m[num]=1;
			num= helper(num);
		}
		return num==1;
    }
};
