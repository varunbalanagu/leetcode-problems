class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        Arrays.sort(capacity);
        int sum=0;
        for(int i=0;i<apple.length;i++)
        {
            sum=sum+apple[i];
        }
        int add=0;
        int c=0;
        for(int i=capacity.length-1;i>=0;i--)
        {
            c++;
            add+=capacity[i];
            if(add>=sum)
            {
                return c;
            }
        }
        return -1;
        
    }
}