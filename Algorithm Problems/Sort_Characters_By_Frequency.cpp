//Sort Characters By Frequency
//Date 17 Aug 2020
//Source https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    int maxidx(int a[]){
        int temp=-1;
        int idx=-1;
        for(int i=0;i<128;i++){
            if(temp<a[i]){
                idx=i;
                temp=a[i];
            }
        }
        
        return idx;
    }
    string frequencySort(string s) {
        int a[128]={0};
        for(int i=0;i<s.length();i++){
            a[(int)s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            int nidx= maxidx(a);
            for(int j=0;j<a[nidx];j++){
                s[i+j]=(char)nidx;
            }
            i=i+a[nidx]-1;
            a[nidx]=0;
        }
        return s;
    }
};
