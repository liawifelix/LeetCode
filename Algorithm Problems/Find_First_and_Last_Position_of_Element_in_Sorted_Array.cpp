//Find First and Last Position of Element in Sorted Array
//Date 16 Aug 2020
//Source https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        bool start= false;
        vector<int> res(2,-1);
        for(int i=0;i<nums.size();i++){
            if(target==nums[i] && start==false){
                start= true;
                res[0]=i;
                res[1]=i;
            }
            else if(target!=nums[i] && start==true){
                res[1]=i-1;
                break;
            }
            else if(start==true && i==nums.size()-1){
                res[1]=i;
                break;
            }
            if(nums[i]>target && start==false){
                break;
            }
        }
        return res;
    }
};
