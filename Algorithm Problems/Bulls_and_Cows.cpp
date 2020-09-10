//Bulls and Cows
//Date 11 Sept 2020
//Source https://leetcode.com/problems/bulls-and-cows/

class Solution {
public:
    string getHint(string secret, string guess) {
        string ans="";
        int bull=0;
        int cow=0;
        int s[10];
        int g[10];
        int b[10];
        for(int i=0;i<10;i++){
            s[i]=0;
            g[i]=0;
        }
        for(char c:secret){
            s[(int)c-48]++;
        }
        for(char c:guess){
            g[(int)c-48]++;
        }
        for(int i=0;i<10;i++){
            if(s[i]!=0 && g[i]!=0){
                b[i]= (s[i]> g[i] ? g[i] : s[i] );
                cow= b[i] + cow;
            }
        }
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                bull++;
                cow--;
            }
        }
        ans= to_string(bull)+"A"+to_string(cow)+"B";
        return ans;
    }
};
