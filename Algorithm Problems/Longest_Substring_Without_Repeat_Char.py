# 11 July 2021

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res=1
        i=0
        map_char= dict()
        if len(s)==0:
            return 0
        map_char[s[i]] = 0
        for j in range(1,len(s)):
            try:
                if str(map_char[s[j]]):
                    if map_char[s[j]]<i:
                        pass
                    else:
                        i= map_char[s[j]]+1
                    map_char[s[j]]= j
            except:
                map_char[s[j]] = j
            res= max(res, j-i+1)
        return res
