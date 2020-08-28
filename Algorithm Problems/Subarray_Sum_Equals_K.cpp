//Subarray Sum Equals K
//Date 28 Aug 2020
//Source https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
		int sum=0;
		int ans=0;
		unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
			sum+=nums[i];
			if(sum==k){
				ans++;
			}
			if(m.find(sum-k)!=m.end()){
				ans+=m[sum-k];
			}
			m[sum]++;
		}
		return ans;
    }
};
