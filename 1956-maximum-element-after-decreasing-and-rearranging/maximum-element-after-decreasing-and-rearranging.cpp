class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        long long n=arr.size();
        long long count=0;
        bool flag=false;
        if(arr.size()==1)
        return 1;
        sort(arr.begin(),arr.end());
        if(arr[0]!=1)
        {
            arr[0]=1;
            arr[1]=2;
        
        for(int i=1;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])>1)
           {
              arr[i+1]=arr[i]+1;
           }
        }
        }
        else
        {
             for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])>1)
           {
              arr[i+1]=arr[i]+1;
           }
        }
        }
        int m=-1;
        for(int i=0;i<n;i++)
        {
            // cout<<arr[i];
            m=max(m,arr[i]);
        }
        return m;
    }
};