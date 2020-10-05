//Complement of Base 10 Integer
//Date 5 Oct 2020
//Source https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    string intbit(int n){
        string res="";
        while(n>0){
            res=res+to_string(n%2);
            n=n/2;
        }
        return res;
    }
    
    int comple(string in){
        int res=0;
        for(int i=0;i<in.length();i++){
            if(in[i]=='0'){
                cout<<i<<endl;
                res= res+ pow(2,i);
            }
                
        }
        return res;
    }
    
    int bitwiseComplement(int N) {
        if(N==0)
            return 1;
        return comple(intbit(N));
    }
};
