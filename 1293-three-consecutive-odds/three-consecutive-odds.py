class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        count=0
        for i in arr:
            
            if i%2!=0:
                count+=1

            

            else:
                count=0
            print(count,end="  ")

            if count>2:
                return True
        return False
        