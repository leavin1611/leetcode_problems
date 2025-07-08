class Solution:
    def reverseWords(self, s: str) -> str:
        a=""
        l=s.split(" ")
        for i in range(-1,-len(l)-1,-1):
            a=a+" "+l[i]
            a=a.strip()
        return a
        

        
        