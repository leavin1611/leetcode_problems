int numJewelsInStones(char* j, char* s) {
int i=0,c=0;

while(j[i]!='\0')
{
    for(int k=0;s[k]!='\0';k++)
    {
        if(j[i]==s[k])
        {
            c++;
        }
    }
    i++;

}
return c;

}