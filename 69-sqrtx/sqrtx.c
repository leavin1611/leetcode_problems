int mySqrt(int x)
 {
    
    if(x==1)
 return 1;

 if(x==2)
 return 1;

    long long int p=1,i;
    for(i=1;i<=x;i++)
    {
        p=i*i;

        if(p==x)
        return i;

        else if(p>x)
            return --i;

    }return 0;
}