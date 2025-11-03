int countOdds(int low, int high){
    int count=0;
    int k=low,n=high;
    for(int i=k;i<=n;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
return count;
}