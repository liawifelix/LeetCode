//Word Break
//Date 11 Aug 2020
//Source https://leetcode.com/problems/word-break/

using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int l= s.length();
		bool dp[l+1];
        for(int i=0;i<l+1;i++)
            dp[i]=false;
		dp[0]=true;
        
		unordered_set<string> set;
		for(int i=0;i<wordDict.size();i++)
            set.insert(wordDict[i]);
        
		for(int i=0;i<l;i++){
			if(dp[i]==true){
				for(int j=i+1;j<l+1;j++){
					string sb= s.substr(i,j-i);
					if(set.count(sb)>=1){
						dp[j]=true;
					}
				}
			}		
		}
		return dp[l];
    }
};
