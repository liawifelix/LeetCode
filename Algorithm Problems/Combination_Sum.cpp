//Combination Sum
//Date 2 Oct 2020
//Source https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> com;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, res, com, 0);
        return res;
    }
    void helper(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &combination, int begin){
        if(target==0){
            res.push_back(combination);
            return;
        }
        for(int i=begin;i<candidates.size();i++){
            if(target>=candidates[i]){
                combination.push_back(candidates[i]);
                helper(candidates, target-candidates[i], res, combination, i);
                combination.pop_back();
            }
        }
    }
};
