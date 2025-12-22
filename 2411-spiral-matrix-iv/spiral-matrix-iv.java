/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[][] spiralMatrix(int m, int n, ListNode head) {
       
        int top=0,left=0,right=n-1,bottom=m-1;

        int[][] a=new int[m][n];
ListNode temp=head;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
               { 
                if(temp!=null)
                {a[top][i]=temp.val;
                temp=temp.next;
               }
               else
               a[top][i]=-1;
               }
            top++;

if(top>bottom || left>right) break;
            for(int i=top;i<=bottom;i++)
              { if(temp!=null) 
              {a[i][right]=temp.val;
              temp=temp.next;
              }
              else
              a[i][right]=-1;
              }
            right--;
if(top>bottom || left>right) break;
            for(int i=right;i>=left;i--)
            { if(temp!=null)
               { a[bottom][i]=temp.val;
            temp=temp.next;}
            else
            a[bottom][i]=-1;
            }
            bottom--;
if(top>bottom || left>right) break;
            for(int i=bottom;i>=top;i--)
            {if(temp!=null)
               { a[i][left]=temp.val;
               temp=temp.next;
               }
               else a[i][left]=-1;
            }
            left++;
            if(top>bottom || left>right) break;
        }
        return a;
    }
}