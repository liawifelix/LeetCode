
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
