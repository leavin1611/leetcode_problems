double findMaxAverage(int* nums, int n, int k) {
    double  mxsum;
    int sum=0;
    for (int i=0;i<k;i++)
    {
        sum=sum+nums[i];
    }
    mxsum=sum;
   for(int i=k;i<n;i++)
    {sum=sum-nums[i-k];
    sum=sum+nums[i];
    if(sum>mxsum)
    
    {mxsum=sum;
    }
    
    printf("%f\t\n",mxsum);
    
    
    

    


    

    }return (double)mxsum/(double)k;

    
}