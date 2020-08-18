//Permutations
//Date 18 Aug 2020
//Source https://leetcode.com/problems/permutations/

class Solution {
public:
	void helper(vector<vector<int>> &res, vector<int>& nums, int a){
		if(nums.size()-1==a){
			res.push_back(nums);
			return;
		}
		for(int i=a;i<nums.size();i++){
			swap(nums[a],nums[i]);
			helper(res,nums,a+1);
			swap(nums[a],nums[i]);
		}
	}
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		helper(res,nums,0);
		return res;
    }
};
