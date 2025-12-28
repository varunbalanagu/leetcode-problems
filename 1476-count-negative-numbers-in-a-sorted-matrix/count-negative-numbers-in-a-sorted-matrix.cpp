class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int low=0,high=m-1,mid;
            count=-1;
            while(low<=high)
            {
               mid=(low+high)/2;
               if(grid[i][mid]<0)
               {
                count=mid;
                high=mid-1;
                  
               }
               else 
               {
                  low=mid+1;
               }
            }
            if(count==-1) ans=0;
            else
            ans+=(m-count);
        }
        return ans;
        
    }
};