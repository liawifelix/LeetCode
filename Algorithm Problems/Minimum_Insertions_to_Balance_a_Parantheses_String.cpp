//Minimum Insertions to Balance a Parantheses String
//Date 18 Aug 2020
//Source https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

class Solution {
public:
    int minInsertions(string s) {
		stack<char> ss;
		int ans=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				ss.push(s[i]);
			}
			else{
				if(!ss.empty()){
					if(i+1<s.length() && s[i+1]==')'){
						ss.pop();
						i++;
					}
					else{
						ss.pop();
						ans++;
					}
				}
				else{
					if(i+1<s.length() && s[i+1]==')'){
						i++;
						ans++;
					}
					else{
						ans+=2;
					}
				}
			}
		}
		if(ss.empty())
			return ans;
		else
			return ss.size()*2+ans;
    }
};
