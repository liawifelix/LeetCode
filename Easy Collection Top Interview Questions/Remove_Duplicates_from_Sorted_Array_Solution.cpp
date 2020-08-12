//Date 12 Aug 2020
//Source https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
			if(nums.size()==0)
				return 0;
			int ans=0;
			for(int i=0;i+1<nums.size();i++){
				if(nums[i]==nums[i+1]){
					
				}
				else{
					ans++;
					nums[ans]=nums[i+1];
				}
			}
			return ans+1;
    }
};
