bool isPowerOfFour(int n)
 {
   	int c=0,d=0,t;
	t=n;
	while(n>0)
	{
		if(n%4==0)
		c++;
		
		else
		d++;
		
		n=n/4;
	}
	int s=1;
	for(int i=1;i<=c;i++)
	{
		s=s*4;
	}
if(s==t)
return true;
else
return false;


}