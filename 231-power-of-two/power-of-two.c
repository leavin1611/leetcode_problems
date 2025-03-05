bool isPowerOfTwo(int n)
 {
   	int c=0,d=0,t;
	t=n;
	while(n>0)
	{
		if(n%2==0)
		c++;
		
		else
		d++;
		
		n=n/2;
	}
	int s=1;
	for(int i=1;i<=c;i++)
	{
		s=s*2;
	}
if(s==t)
return true;
else
return false;


}