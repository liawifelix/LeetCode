//Ransom Note
//Date 14 Aug 2020
//Source https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
        for(int i=0;i<magazine.length();i++){
            a[(int)magazine[i]-97]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            a[(int)ransomNote[i]-97]--;
            if(a[(int)ransomNote[i]-97]<0)
                return false;
        }
        return true;
    }
};
