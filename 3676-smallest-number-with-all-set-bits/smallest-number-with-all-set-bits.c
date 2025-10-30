int smallestNumber(int n) {
    int count=0;

    while(n!=1)
    {
        n=n/2;
        count++;
    }

    return (int)pow(2,count+1)-1;
    

}