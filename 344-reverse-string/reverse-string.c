void reverseString(char* s, int sSize)
{int k=0;
char a[sSize];
    for(int i=sSize-1;i>=0;i--)
{
    a[k]=s[i];
    k++;
}

     for(int i=0;i<sSize;i++)
{
    s[i]=a[i];
    k++;
}
}