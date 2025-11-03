int findNumbers(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        int num=nums[i];
        int k=0;
        while(num>0)
        {
            num/=10;
            k++;
        }
        if( k % 2 == 0)
        {
            count++;
        }
    }
    
    return count;
}