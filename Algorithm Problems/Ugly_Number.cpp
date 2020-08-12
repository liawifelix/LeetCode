//Ugly Number
//Date 12 Aug 2020
//Source https://leetcode.com/problems/ugly-number/

class Solution {
public:
    bool isUgly(int num) {
			//2 3 5
			bool two=true, three=true, five=true;
			if(num==0)
				return false;
			while(two){
				if(num%2==0){
					num=num/2;
				}
				else
					two=false;
			}
			while(three){
				if(num%3==0){
					num=num/3;
				}
				else
					three=false;
			}
			while(five){
				if(num%5==0){
					num=num/5;
				}
				else
					five=false;
			}
			if(num!=1)
				return false;
			return true;
    }
};