int removeDuplicates(int* nums, int numsSize)
 {
    for (int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {if(nums[i]!=999)
        {
            if(nums[i]==nums[j])
            {
                nums[j]=999;
            }
        }
        }
    }
    int k=0;
for(int i=0;i<numsSize;i++)
{
if(nums[i]==999)
continue;

nums[k]=nums[i];
k++;
}

return k;
}