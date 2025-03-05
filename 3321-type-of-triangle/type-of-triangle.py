class Solution:
    def triangleType(self, nums: List[int]) -> str:
        count=0
        sum=0
        k=2
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                    
                if(nums[i]+nums[j]>nums[k]):
                    sum+=1
                    k-=1




       
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if(nums[i]==nums[j]):
                    count+=1
        
        if count==3 and sum==3:
            return 'equilateral'
        elif count==2 or count==1 and sum==3:
            return 'isosceles'
        elif count==0 and sum==3:
            return 'scalene'
        else:
            return 'none'    
        