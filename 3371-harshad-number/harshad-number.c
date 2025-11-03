int sumOfTheDigitsOfHarshadNumber(int x) 
{
    int sum=0;
    int org=x;
    while(x>0)
    {
        int digit=x%10;
        sum+=digit;
        x/=10;
    }
    if(sum==0)
    {
        return -1;
    }
    else if(org%sum==0)
    {
        return sum;
    }
    return -1;
}