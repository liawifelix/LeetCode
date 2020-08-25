//Contains Duplicate
//Date 26 Aug 2020
//Source https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};
