class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        divisible=0
        no_divisible=0
        for i in range(n+1):
            if(i%m==0):
                divisible+=i
            else:
                no_divisible+=i
        return no_divisible-divisible
        