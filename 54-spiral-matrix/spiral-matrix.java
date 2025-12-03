class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n=matrix.length;
        int top=0,bottom=n-1;
        int left=0,right=matrix[0].length-1;
        List<Integer>lis=new ArrayList<>();
        while(top<=bottom&&left<=right)
        {
           for(int i=left;i<=right;i++)
           {
            lis.add(matrix[top][i]);
           }
           top++;
           for(int i=top;i<=bottom;i++)
           {
            lis.add(matrix[i][right]);
           }
           right--;
           
    
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                lis.add(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                lis.add(matrix[i][left]);
            }
            left++;
        }
        }
        return lis;
        
    }
}