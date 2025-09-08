class Solution {
    public int[] getNoZeroIntegers(int n) {
        int [] ans=new int[2];
        int [] fre=new int[n+1];
        for(int i=1;i<=n;i++)
        {
            int h1=i;
            boolean flag=true;
            while(h1>0)
            {
               if(h1%10==0)
                {
                    flag=false;
                    break;
                }
                h1=h1/10;
            }
            if(flag==false)
            {
               fre[i]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(fre[i]!=0)
            {
                continue;
            }
            
            for(int j=i;j<=n;j++)
            {
                if(fre[j]!=0)
                {
                    continue;
                }
               
                if(i+j==n)
                {
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
        
    }
}