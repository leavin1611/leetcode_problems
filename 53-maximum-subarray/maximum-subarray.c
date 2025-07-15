int maxSubArray(int* nums, int n) {
    int sum=0,max=-999999999;
    for(int i=0;i<n;i++)
    {sum=sum+nums[i];
        if(sum>max) max=sum;
        if(sum<0) sum=0;
    }return max;
}