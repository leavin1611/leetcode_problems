int majorityElement(int* a, int numsSize)
 {
int d,dup=1;
if(numsSize==1)
return a[0];

for(int i=0;i<numsSize;i++)
{d=1;
if(a[i]!=10)
{
    for(int j=i+1;j<numsSize;j++)
    {
        if(a[i]==a[j])
        {
            d++;
            dup=a[i];
            a[j]=10;
            }
    }
    if(d>numsSize/2)
    return dup;
 
}

}
 return dup;   
}