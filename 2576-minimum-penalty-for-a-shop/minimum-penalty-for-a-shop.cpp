class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>prefix(n+1,0);
        vector<int>suffix(n+1,0);
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1];
            if(customers[i-1]=='N')
            prefix[i]++;
        }
     
        for(int i=n-1;i>=0;i--)
        {
            suffix[i]=suffix[i+1];
            if(customers[i]=='Y')
            suffix[i]++;
        }
        int m=INT_MAX;
        int index=0;
        for(int i=0;i<=n;i++)
        {
            if(suffix[i]+prefix[i]<m)
            {
                m=suffix[i]+prefix[i];
                index=i;
            }
        }
        return index;
    }
};