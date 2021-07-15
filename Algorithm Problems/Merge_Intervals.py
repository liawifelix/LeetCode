# 15 July 2021
# Time complexity O(n log n)
# Space complexity O(1)

class Solution:
    def compare(self, item):
        return item[0]

    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        arr=sorted(intervals, key= self.compare)
    
        result=[]
        index=0

        start=arr[index][0]
        end=arr[index][1]
        
        while index<len(arr):
            if index+1<len(arr) and end>=arr[index+1][0]:
                if index+1<len(arr) and end<=arr[index+1][1]:
                    end= arr[index+1][1]
            else:
                result.append([start, end])
                if index+1<len(arr) and index+1<len(arr):
                    start= arr[index+1][0]
                    end= arr[index+1][1]
                else:
                    break
            index += 1

        return result
