class Solution:
    def countKeyChanges(self, s: str) -> int:
        l=s.lower()
        a=0
        for i in range(len(l)-1):
            if(l[i]!=l[i+1]):
                a=a+1
        return a
            
              

                
                

        