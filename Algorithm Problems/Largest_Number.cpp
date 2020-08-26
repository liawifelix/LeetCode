//Largest Number
//Date 26 Aug 2020
//Source https://leetcode.com/problems/largest-number/

class Solution {
public:
    static bool compare(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int i=0;i<nums.size();i++){
            str.push_back(to_string(nums[i]));
        }
        sort(str.begin(),str.end(),compare);
        string res;
        for(auto s:str){
            res= res +s;
        }

        return (res[0]=='0'? "0": res);
    }
};
