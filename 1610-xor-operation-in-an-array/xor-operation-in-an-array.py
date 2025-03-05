class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        l=[]
        i=1
        for i in range(n):
            ele=start+2*i
            l.append(ele)
        sum=l[0]
        for i in range(1,len(l)):
            sum=sum^l[i]
        return sum
        