bool isPalindrome(int x) {
  long  int r=0,temp=x;
    while(x>0)
    {
       r=(x%10)+(r*10);
        x=x/10;
    }

    if(temp==r)
    return true;
    else
    return false;


    
    
}