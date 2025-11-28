class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long rev=0;
        while(n>0)
        {
            int r=n%10;
            if(r!=0)
            rev=rev*10+r;
            sum=sum+r;
            n=n/10;
        }
        int ans=0;
        while(rev>0)
        {
            int r=rev%10;
            ans=ans*10+r;
            rev=rev/10;
        }
        return ans*sum;
    }
};