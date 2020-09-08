//Word Pattern
//Date 8 Sept 2020
//Source https://leetcode.com/problems/word-pattern/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<string, int> m;
        string s[27];
        for(int i=0;i<27;i++){
            s[i]="0";
        }
        vector<string> vstr;
        string temp="";
        for(int i=0;i<str.length();i++){
            if(str[i]!=' '){
                temp= temp+ str[i];    
            }
            else{
                vstr.push_back(temp);
                temp="";
            }
        }
        vstr.push_back(temp);
        if(pattern.length()!= vstr.size()){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            if(s[(int)pattern[i] - 97] =="0"){
                s[(int)pattern[i] - 97]= vstr[i];
                if(m[vstr[i]]!=0){
                    return false;
                }
                m[vstr[i]]++;
            }
            else if(s[(int)pattern[i] - 97] != vstr[i]){
                return false;
            }
        }
        return true;
    }
};
