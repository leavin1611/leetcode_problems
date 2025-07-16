#include<float.h>
double findMaxAverage(int* nums, int n, int k) {
    double  mxavg=-DBL_MAX,cur_avg=0;
    int sum=0;
    int l=0,r=0;
    while(r<n)
    {
        sum+=nums[r];
        if(r>=k-1)
        {
            cur_avg=(double)sum/k;
            if(cur_avg>mxavg)mxavg=cur_avg;
            sum-=nums[l];
            l++;
            
        }
        r++;
    }return mxavg;

    
   


   

    
}