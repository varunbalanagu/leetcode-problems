class Solution {
    public int minLengthAfterRemovals(String s) {
        int n=s.length();
        int c=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(s.charAt(i)=='a')
            {
                c++;
            }
            else
            {
                c2++;
            }
        }
        return Math.abs(c-c2);
    }
}