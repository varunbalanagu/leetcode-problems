class Solution {
public:
    int smallestNumber(int n) {
       int i=n;
        while(i>=n)
        {
            int k=i;
            int b;
            int flag=1;
            while(k>0)
            {
                b=k%2;
                if(b!=1)
                {
                    flag=0;
                    break;
                }
                k=k/2;
                
            }
            if(flag==1)
                return i;
            i++;
                
        }
        return 0;
    }
};