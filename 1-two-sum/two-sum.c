/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numSize, int target, int* returnSize)
{
    int *result=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numSize-1;i++)
    {
        for(int j=i+1;j<numSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                *result=i;
                *(result+1)=j;
                *returnSize=2;
            
            }
        }
    }return result;
}