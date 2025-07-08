class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a=""
        a=s.strip().split(" ")
        c=0
        for i in a[-1]:
            c=c+1
        return c

        

        