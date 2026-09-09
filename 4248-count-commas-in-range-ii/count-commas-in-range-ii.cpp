class Solution {
public:
    long long countCommas(long long n) {
        long long sum=0;
        long long temp=n;
        long long c=0;
        while(temp>0)
            {
                // int r=temp%10;
                c++;
                temp=temp/10;
            }
        long long ans=0;
        if(c<4)
            ans=0;
         if(n>=1000)
         {
            long long upper=min(n,999999LL);
             ans+=(upper-999);
         }
         if(n>=1000000){
            long long upper=min(n,999999999LL);
             ans+=(upper-999999)*2;
        }
         if(n>=1000000000)
        {
            long long upper=min(n,999999999999LL);
            ans+=(upper-999999999)*3;
        }
        if(n>=1000000000000)
        {
            long long upper=min(n,999999999999999LL);
            ans+=(upper-999999999999LL)*4;
        }
        if(n>=1e15)
        {
            ans+=(n-999999999999999LL)*5;
        }
        return ans;
            
    }
};