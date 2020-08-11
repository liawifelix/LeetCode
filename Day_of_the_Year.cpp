//Day of the year
//Date 11 Aug 2020
//Source https://leetcode.com/problems/day-of-the-year/

class Solution {
public:
    int dayOfYear(string date) {
        //format 2019-02-10
		int ans=0;
		int y= stoi(date.substr(0,4));
		int m= stoi(date.substr(5,7));
		int d= stoi(date.substr(8,10));
		
		int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(leep(y))
			month[1]+=1;
		
		for(int i=0;i<m-1;i++)
			ans=ans+month[i];
		ans=ans+d;
		return ans;
    }
	bool leep(int year){
		if(year%400==0)
			return true;
		else if(year%100==0)
			return false;
		else if(year%4==0)
			return true;
		return false;
	}
};
