//Rectangle Overlap
//Date 11 Aug 2020
//Source https://leetcode.com/problems/rectangle-overlap/

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int xb1= rec1[0], yb1= rec1[1], xt1= rec1[2], yt1= rec1[3];
		int xb2= rec2[0], yb2= rec2[1], xt2= rec2[2], yt2= rec2[3];
		
		if(xb1>=xt2 || yb1>=yt2)
            return false;
        
        if(xb2>=xt1 || yb2>=yt1)
            return false;
        
        return true;
	}
};