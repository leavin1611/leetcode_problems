class Solution {
    public void rotate(int[] nums, int k) {

        ArrayDeque<Integer> que = new ArrayDeque<>();

int s=k%nums.length;
        for(int i=nums.length-1;s>0;i--)
        {
            que.addFirst(nums[i]);
            s--;
        }
        for(int i=0;i<=nums.length-s-1;i++)
        {
            que.addLast(nums[i]);
        }
int i=0;
        for(int x:que)
        {if(i>nums.length-1) break;
            nums[i++]=x;

        }
        

    }
}