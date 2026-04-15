class Solution {
public:
    int integerBreak(int n) {
        int m=-1;
        int pro=1;
        for(int i=2;i<=n;i++)
        {
            int a=n/i;
            int b=n%i;
            pro=pow(a+1,b)*pow(a,(i-b));
            m=max(m,pro);
        }
        return m;
        
    }
};