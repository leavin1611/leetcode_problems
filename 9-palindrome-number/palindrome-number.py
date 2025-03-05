class Solution:
    def isPalindrome(self, x: int) -> bool:
        n=x
        s=0
        while(x>0):
            s=s*10+(x%10)
            x=x//10
        if(n==s):
            return True
        else:
            return False

        