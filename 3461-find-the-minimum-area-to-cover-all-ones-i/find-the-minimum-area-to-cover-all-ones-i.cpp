class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=-1,s=-1;
        int minRow=INT_MAX,mincol=INT_MAX;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<grid[i].size();j++)
           {
            if(grid[i][j]==1)
            {
                m=max(m,i);
                 minRow = min(minRow, i);
            }
           
           }
        }
         for(int i=0;i<grid[0].size();i++)
        {
           for(int j=0;j<n;j++)
           {
            if(grid[j][i]==1)
            {
                s=max(s,i);
                mincol=min(mincol,i);
            }
           
           }
        }
        return (m-minRow+1)*(s-mincol+1);
        
    }
};