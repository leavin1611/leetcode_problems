int climbStairs(int n) {
    int a=1,b=2,c;
    if(n==1||n==2)
    return n;
    for(int i=1;i<n-1;i++)
{
    c=a+b;
    a=b;
    b=c;
}
return c;
}