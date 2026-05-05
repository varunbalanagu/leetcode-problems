class Solution {
public:
    bool fun(int mid,vector<int>&weights,int days)
    {
        int sum=0;
        int n=weights.size();
        int d=1;
        for(int i=0;i<n;i++)
        {
            // sum=sum+weights[i];
            if(weights[i]>mid)
            {
                return false;
            }
           
                if(sum+weights[i]>mid)
                {
                    d++;
                    sum=weights[i];
                }
                else
                {
                    sum+=weights[i];
                }
            
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int m=-1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,weights[i]);
            // ans=ans+weights[i];
        }
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ma=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(fun(mid,weights,days))
            {
                ma=min(ma,mid);
                cout<<ma;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ma;

    }
};