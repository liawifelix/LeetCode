# 19 July 2021
# Time complexity O(m*nlogn)
# Space complexity O(1)

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            word_dict= dict()
            for i in strs:
                dict_i= tuple(sorted(i))
                if dict_i in word_dict.keys():
                    word_dict[dict_i].append(i)
                else:
                    word_dict[dict_i]=[i]
            return list(word_dict.values())
