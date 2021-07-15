# 15 July 2021
# Time complexity O(n)
# Space complexity O(1)

class Solution:
    def customSortString(self, order: str, str: str) -> str:
            ans=""
            map_str=dict()
            for i in range(len(str)):
                try: 
                    map_str[str[i]] += 1
                except:
                    map_str[str[i]] = 1

            for i in range(len(order)):
                if order[i] in str:
                    ans += order[i]*map_str[order[i]]

            for i in range(len(str)):
                if str[i] not in order:
                    ans += str[i]

            return ans
