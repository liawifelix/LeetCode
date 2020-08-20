//Letter Combinations of a Phone Number
//Date 20 Aug 2020
//Source https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
	char c[10][10]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
	void helper(int len, string digits, vector<string> &res, string cur){
		if(cur.length()==len){
			res.push_back(cur);
			return;
		}
		if(digits[0]!='7' && digits[0]!='9'){
			for(int j=0;j<3;j++){
				helper(len, digits.substr(1,digits.length()-1), 
				res, cur+ c[(int)digits[0]-48-2][j]);
			}
		}
		else{
			for(int j=0;j<4;j++){
				helper(len, digits.substr(1,digits.length()-1), 
				res, cur+ c[(int)digits[0]-48-2][j]);
			}
		}
	}
	
	vector<string> letterCombinations(string digits) {
		vector<string> res;
		if(digits.length()==0)
			return res;
		helper(digits.length(),digits, res,"");
        return res;
    }
};
