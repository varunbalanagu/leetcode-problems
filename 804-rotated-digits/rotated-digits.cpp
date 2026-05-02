class Solution {
public:
    int rotatedDigits(int n) {
        int c=0;
        for(int i=1;i<=n;i++)
        {
            int k=i;
            bool flag=false;
            while(k>0)
            {
                int r=k%10;
                if(r!=3&&r!=4&&r!=7)
                {
                     if(r==2||r==5||r==6||r==9)
                    {
                       flag=true;
                    }
                }
                else
                {
                    flag=false;
                    break;
                }
                k=k/10;
            }
            if(flag) c++;
        }
        return c;
        
    }
};