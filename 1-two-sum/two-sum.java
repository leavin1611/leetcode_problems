import java.util.ArrayList;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i;
        int[] res = new int[2];
        for( i=0;i<nums.length-1;i++)
{
        for(int j=i+1;j<nums.length;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                res[0]=i;
                res[1]=j;
                break;
            }
            
        }
    }
        return res;
    }
    
}