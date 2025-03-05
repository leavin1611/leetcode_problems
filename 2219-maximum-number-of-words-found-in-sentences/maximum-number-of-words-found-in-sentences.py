class Solution:
    
    def mostWordsFound(self, s: List[str]) -> int:
        l=[]
        for i in s:
            l.append(i.count(" ")+1)
        return max(l)