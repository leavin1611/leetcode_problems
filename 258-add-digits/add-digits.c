int sep(int n)
{int s=0;

    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}


int addDigits(int n) {
 int r=sep(n);
    

       if(r<9)
    return r;

    else 
    {
    r=sep(r);
    if(sep(r)<9)
    return sep(r);
    else
    return sep(r);
}

    
}