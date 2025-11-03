int countNegatives(int** grid, int gridSize, int* gridColSize) {
 int count=0;
 for(int i=0;i < gridSize;i++)
 {
    int cols=gridColSize[i];
    for(int j=0; j < cols;j++){
        if(grid[i][j]<0)
        {
            count++;
        }
    }
 }   
 return count;
}