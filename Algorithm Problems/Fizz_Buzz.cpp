//Fizz Buzz
//Date 26 Aug 2020
//Source https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        string f;
        string b;
        f= "Fizz";
        b= "Buzz";
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0)
                res.push_back(f+b);
            else if(i%5==0)
                res.push_back(b);
            else if(i%3==0)
                res.push_back(f);
            else
                res.push_back(to_string(i));
        }
        return res;
    }
};
