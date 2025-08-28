class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int n=dimensions.length;
        int maxi=-1;
        int maxindex=-1;
        int area=-1;
        for(int i=0;i<n;i++)
        {
            // area=0;
            int k=dimensions[i][0]*dimensions[i][0];
            int l=dimensions[i][1]*dimensions[i][1];
             int sqr=(k+l);
             if(sqr>maxi)
             {
                maxi=sqr;
                area=dimensions[i][0]*dimensions[i][1];
             }
             else if (sqr == maxi) {
                area = Math.max(dimensions[i][0]*dimensions[i][1], area);
             }

        }
        return area;
        
    }
}