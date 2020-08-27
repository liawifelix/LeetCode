//Thousand Seperator
//Date 27 Aug 2020
//Source https://leetcode.com/problems/thousand-separator/

class Solution {
public:
    string thousandSeparator(int n) {
        string sn= to_string(n);
        string res= "";
        int j=0;
        for(int i=sn.length()-1;i>=0;i--){
            res= sn[i]+res;
            j++;
            if((j)%3==0)
                res="."+res;
        }
        if(res[0]=='.')
            return res.substr(1,res.length()-1);
        return res;
    }
};
