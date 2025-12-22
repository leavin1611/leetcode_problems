class Solution {
    public int[][] generateMatrix(int n) {

        int top=0,left=0,right=n-1,bottom=n-1;

        int ele=1;

         int[][] a=new int[n][n];

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
                    a[top][i]=ele++;
            top++;

        if(top>bottom || left>right) break;

            for(int i=top;i<=bottom;i++)
                    a[i][bottom]=ele++;
            right--;

        if(top>bottom || left>right) break;

            for(int i=right;i>=left;i--)
                    a[bottom][i]=ele++;
            bottom--;

            if(top>bottom || left>right) break;

            for(int i=bottom; i>=top;i--)
                a[i][left]=ele++;
            left++;

        }
        return a;
    }
}