int romanToInt(char* s) {
      int a[50],sum=0,i=0,c=0;
   while(*(s+i)!='\0')
   {c++;
       switch(*(s+i))
       {
           case 'I':
           a[i]=1;
           break;

           case 'V':
           a[i]=5;
           break;
           
           case 'M':
           a[i]=1000;
           break;
          
          case 'C':
           a[i]=100;
           break;

           case 'D':
           a[i]=500;
           break;
           
           case 'L':
           a[i]=50;
           break;

           case 'X':
           a[i]=10;
           break;
       }i++;
   }

   for(int  i=0;i<c;i++)
   {
    if((i+1)!=c && a[i]<a[i+1])
    { 
       a[i+1]=a[i+1]-a[i];
       i++;
    }
     sum=a[i]+sum;
   }

   return sum;
}