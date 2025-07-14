class Solution:
    

    def findKthBit(self, n: int, k: int) -> str:
        if k==1:return '0'
        def rev(s):
            s=[l[i]for i in range(-1,-len(l)-1,-1)]
            for i in range(len(s)):
                if s[i]=='0':s[i]='1'
                else:s[i]='0'
            return s
        l=["0"]
        for i in range(n-1):
            s=list(l)
            s.append('1')
            s.extend(rev(s))
            l=s
        return s[k-1]
        
        
        
        
        
        

        