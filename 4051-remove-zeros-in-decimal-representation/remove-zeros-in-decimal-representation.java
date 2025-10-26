class Solution {
    public long removeZeros(long n) {
        long res=0;
        long c=0;
        long r;
        while(n>0)
        {
            r=n%10;
            if(r!=0)
            res=res*10+r;
            c++;
            n=n/10;
        }
        long sol=0;
        while(res>0)
        {
            sol=sol*10+(res%10);
            res=res/10;
        }
        return sol;
        
        
    }
}