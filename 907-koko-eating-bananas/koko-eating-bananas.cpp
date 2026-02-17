class Solution {
public:
    bool fun(int n,vector<int>&piles,int h)
    {
        long long sum=0;
        for(auto&i:piles)
        {
          sum+=ceil(i*1.0/n);

        }
        if(sum<=h) return true;
        return false; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m=max(m,piles[i]);
        }
        int low=1,high=m;
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(fun(mid,piles,h))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};