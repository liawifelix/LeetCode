//Count Primes
//Date 25 Aug 2020
//Source https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        int ans=0;
        vector<int> v(n+1,0);
        for(int i=2;i<n;i++){
            if(v[i]==0){
                ans++;
                for(int j=i+i;j<n;j+=i){
                    v[j]=1;
                }
            }
        }
        return ans;
    }
};
