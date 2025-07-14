class Solution {
  
     public StringBuilder inv(StringBuilder s)
        { StringBuilder res = new StringBuilder(s.reverse());
        

            for(int i=0;i<res.length();i++)
            {
                if(res.charAt(i)=='0')
                {
                    res.setCharAt(i,'1');
                }
                else{
                     res.setCharAt(i,'0');
                }
            }
            return res;
        }
    public char findKthBit(int n, int k) {
        if(k==0) return '0';
        char c='a';
        StringBuilder s = new StringBuilder("0");
       for(int i=0;i<n;i++)
       {
        s.replace(0,s.length(),s.toString()+"1"+inv(s).toString());
         
       }
       
        return s.charAt(k-1);
    }
}