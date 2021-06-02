# 2 June 2021

class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        s_size=0
        if len(s)==1:
            return False
        stack.append(s[0])
        for i in range(1,len(s)):
            try:
                if (s[i]==")" and stack[s_size]=="(") or (s[i]=="}" and stack[s_size]=="{") or (s[i]=="]" and stack[s_size]=="["):
                    stack.pop()
                    s_size -= 1
                elif s[i]=="(" or s[i]=="{" or s[i]=="[":
                    stack.append(s[i])
                    s_size += 1
                else:
                    return False
            except:
                return False
            
        if s_size==-1:
            return True
        return False
                
                
