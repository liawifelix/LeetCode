//Minimum Numbers of Function Calls to Make Target Array
//Date 27 Aug 2020
//Source https://leetcode.com/problems/minimum-numbers-of-function-calls-to-make-target-array/

class Solution {
public:
	bool done(vector<int> &n){
		for(auto a:n){
			if(a!=0){
				return false;
			}
		}
		return true;
	}
    int minOperations(vector<int>& nums) {
		int ans=0;
		while(!done(nums)){
            bool d=false;
			for(int i=0;i<nums.size();i++){
				if(nums[i]%2==1){
					ans++;
					nums[i]--;
				}
			}
			for(int i=0;i<nums.size();i++){
				if(nums[i]>0)
					d=true;
				nums[i]=nums[i]/2;	
			}
			if(d)
				ans++;
		}
        return ans;
    }
};
