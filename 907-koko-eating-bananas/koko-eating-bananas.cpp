class Solution {
public:
    bool fun(int mid,vector<int>&piles,int h)
    {
        long long sum=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+ceil(piles[i]*1.0/mid);
        }
        return sum<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int ma=-1;
        for(int i=0;i<n;i++)
        {
            ma=max(ma,piles[i]);
        }
        int low=1,high=ma;
        int m=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(fun(mid,piles,h))
            {
                m=min(m,mid);
                high=mid-1;
            }
            else
            {
             low=mid+1;
            }
        }
        return m;
        
    }
};