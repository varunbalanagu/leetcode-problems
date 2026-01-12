class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int n=points.length;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
           int row=Math.abs(points[i][0]-points[i+1][0]);
           int col=Math.abs(points[i][1]-points[i+1][1]);
           if(row>col)
           {
            sum+=row;
           }
           else
           {
            sum+=col;
           }
        }
        return sum;
    }
}