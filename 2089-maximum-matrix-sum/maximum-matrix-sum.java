class Solution {
    public long maxMatrixSum(int[][] matrix) {
       int n=matrix.length; 
       
       long sum=0;
       int c=0;
       int m=Integer.MAX_VALUE;
       int zeros=0;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<matrix.length;j++)
        {
            if(matrix[i][j]<0)
            {
                matrix[i][j]=Math.abs(matrix[i][j]);
                c++;
            }
            if(matrix[i][j]==0)
            {
                zeros++;
            }
            sum+=matrix[i][j];
            m=Math.min(m,matrix[i][j]);
        }
       }
       if(c%2==0)
       {
        return sum;
       }
       else
       {
        return sum-2*m;
       }
        
    }
}