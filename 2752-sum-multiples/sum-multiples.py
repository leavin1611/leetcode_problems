class Solution:
    def sumOfMultiples(self, n: int) -> int:
        sum=0
        for i in range(1,n+1):
            if(i%3==0):
                sum=sum+i
            elif(i%5==0):
                sum=sum+i
            elif(i%7==0):
                sum=sum+i
        return sum
        