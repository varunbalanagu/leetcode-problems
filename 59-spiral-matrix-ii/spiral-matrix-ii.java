class Solution {
    public int[][] generateMatrix(int n) {
        //  int n=matrix.length;
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        // List<Integer>lis=new ArrayList<>();
        int [][] ans=new int[n][n];
        int j=0;
        while(top<=bottom&&left<=right)
        {
           for(int i=left;i<=right;i++)
           {
            ans[top][i]=++j;
           }
           top++;
           for(int i=top;i<=bottom;i++)
           {
            ans[i][right]=++j;
           }
           right--;
           
    
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
              ans[bottom][i]=++j;
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
               ans[i][left]=++j;
            }
            left++;
        }
        }
        return ans;
        
    }
}