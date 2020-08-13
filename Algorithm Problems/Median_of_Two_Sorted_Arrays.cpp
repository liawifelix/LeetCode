//Median of Two Sorted Arrays
//Date 13 Aug 2020
//Source https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int ts= nums1.size()+nums2.size();
        while(ts>nums2.size()){
            nums2.push_back(99999999);
        }
        while(nums1.size()<ts){
            nums1.push_back(99999999);
        }
        int mi;
        int m1,m2;
        int n1=0,n2=0;
        double ans;
        if(ts%2==1){
            mi= ts/2;
            for(int i=0;i<=mi;i++){
                if(nums1[n1]<nums2[n2]){
                    ans= nums1[n1];
                    n1++;
                }
                else
                {
                    ans= nums2[n2];
                    n2++;
                }
            }
        }
        else{
            m1= ts/2;
            m2= m1-1;
            double temp;
            for(int i=0;i<=m1;i++){
                temp=ans;
                if(nums1[n1]<nums2[n2]){
                    ans= nums1[n1];
                    n1++;
                }
                else
                {
                    ans= nums2[n2];
                    n2++;
                }
            }
            ans= (ans+temp)/2;
        }
        
        return ans;
    }
};
