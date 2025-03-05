class Solution:
    def countDigits(self, num: int) -> int:
        l=str(num)
        c=0
        for i in l:
            if(num % (ord(i)-48) == 0):
                c=c+1
        return c
    
        