class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        l=[]
        for i in range(len(words)):
            if(words[i].count(x)>0):
                l.append(i)
        return l
        