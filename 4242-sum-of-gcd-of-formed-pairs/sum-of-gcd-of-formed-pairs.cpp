class Solution {
public:
    int GCD(int a, int b)
    {
        while(b!=0)
            {
                int temp=b;
                b=a%b;
                a=temp;
            }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefix(n,0);
        prefix[0]=nums[0];
        int m=nums[0];
        for(int i=1;i<n;i++)
        {
            m=max(m,nums[i]);
            prefix[i]+=GCD(nums[i],m);
        }
        sort(prefix.begin(),prefix.end());
        long long gcd=0;
        int size=prefix.size();
        for(int i=0;i<size/2;i++)
            {
                // if(nums[i])
                // cout<<prefix[i]<<endl;
                // if
                gcd+=GCD(prefix[i],prefix[size-i-1]);
            }
        return gcd;
    }
};