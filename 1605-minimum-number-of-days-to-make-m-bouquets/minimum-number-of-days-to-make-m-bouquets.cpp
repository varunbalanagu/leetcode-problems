class Solution {
public:
    bool good(int mid,vector<int>&bloomDay,int m ,int k)
    {
        int n =bloomDay.size();
        int sum=0, c=0;
        for(int i =0 ;i < bloomDay.size()  ;i++)
        {
            if(bloomDay[i]<=mid)
            {
                c++;
            }
            else
            {
                c=0;
            }
            if(c==k)
            {
                sum++;
                c=0;
            }
        }
        return sum>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int  n = bloomDay.size();
        int mi =-1;
        for(int  i =0 ;i< n;i++)
        {
            mi=max(mi,bloomDay[i]);
        }
        int low =0 ,high =mi;
        int  ans =-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(good(mid,bloomDay, m, k))
            {
                ans=mid;
                high = mid-1;

            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};