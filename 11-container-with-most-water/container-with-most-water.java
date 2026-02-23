class Solution {
    public int maxArea(int[] height) {
        int i=0,breadth=0,l=0,r=height.length-1,h=0,max_area=0,area=0;
        while(i<height.length)
        {  System.out.print(max_area);

            if(l>r)
              {  break;}

           if(area>=max_area)
             {max_area=area;}

            breadth=r-l;

            if(height[l]<=height[r]) h=height[l];
            else h=height[r];

            area=breadth*h;

            if(height[l]<=height[r]) l++;
            else r--;

            i++;
            
        }
        return max_area;
    }
}