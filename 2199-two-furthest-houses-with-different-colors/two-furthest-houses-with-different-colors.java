class Solution {
    public int maxDistance(int[] colors) {
        int n=colors.length;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(colors[j]!=colors[i])
                {
                    m=Math.max(m,Math.abs(i-j));
                }
            }
        }
        return m;
        
    }
}