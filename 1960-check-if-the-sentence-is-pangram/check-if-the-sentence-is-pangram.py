class Solution:
    def checkIfPangram(self, s: str) -> bool:
        for i in range(97,123):
            c=s.count(chr(i))
            if(c!=0):
                continue
            else:
                return False
        return True
            
        
        
        