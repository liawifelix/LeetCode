//Find Right Interval
//Date 28 Aug 2020
//Source https://leetcode.com/problems/find-right-interval/

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
		vector<int> res;
		map<int,int> m;
		for(int i=0;i<intervals.size();i++){
			m[intervals[i][0]]=i;
		}
		for(auto i: intervals){
			auto itr= m.lower_bound(i[1]);
			if(itr==m.end())
				res.push_back(-1);
			else
				res.push_back(itr->second);
		}
		return res;
    }
};
