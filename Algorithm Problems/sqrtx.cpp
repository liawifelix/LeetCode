//Sqrt(x)
//Date 25 Aug 2020
//Source https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        long long int low=0;
        long long int high=x;
        long long int ans=0;
        long long int mid;
        while(low<=high){
            mid= (low+high)/2;
            if(mid*mid==x)
                return mid;
            if(mid*mid> x){
                high= mid-1;
            }
            else{
                ans=mid;
                low= mid+1;
            }
        }
        return ans;
    }
};
