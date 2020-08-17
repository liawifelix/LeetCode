//Power of Two
//Date 17 Aug 2020
//Source https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if(n==1)
            return true;
        while(true){
            if(n%2==1){
                return false;
            }
	        n=n/2;
            if(n==1){
                return true;
            }
        }
    }
};
