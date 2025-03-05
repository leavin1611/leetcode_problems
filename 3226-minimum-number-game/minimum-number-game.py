class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        l=[]
        for i in range(len(nums)):
            print(min(nums))
            l.append(min(nums))
            nums.pop(nums.index(min(nums)))
        print(l)
        k=1
        for i in range(0,len(l),2):
                l[i],l[k]=l[k],l[i]  
                k=k+2 
        return l