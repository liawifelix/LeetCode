//Reverse Integer
//Date 25 Aug 2020
//Source 

class Solution {
public:
    int reverse(long long int x) {
        long long int res=0;
        bool neg= false;
        if(x<0){
            x=-x;
            neg=true;
        }
        while(x>0){
            res= res*10+ x%10;
            x=x/10;
        }
        if(neg)
            res=-res;
        if(res<=-2147483648 || res>=2147483648)
            return 0;
        return res;
    }
};
