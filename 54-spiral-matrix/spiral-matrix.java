class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {

        int top=0,right=matrix[0].length-1,bottom=matrix.length-1,left=0;
       
        List<Integer> a=new ArrayList<>();

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            a.add(matrix[top][i]);
            top++;
 if(top>bottom || left>right) break;
            for(int i=top;i<=bottom;i++)
            a.add(matrix[i][right]);
            right--;
 if(top>bottom || left>right) break;
            for(int i=right;i>=left;i--)
            a.add(matrix[bottom][i]);
            bottom--;
             if(top>bottom || left>right) break;
            for(int i=bottom;i>=top;i--)
            a.add(matrix[i][left]);
            left++;

           if(top>bottom || left>right) break;
        }
      
        return a;
    }
}