class Solution {
public:
    void BFS(vector<vector<int>>&grid,queue<pair<pair<int,int>,int>>&q,int &tm)
    {
        int n=grid.size();
        int m=grid[0].size();
          int delrow[4]={-1,0,1,0};
        int delcol[4]={0,-1,0,1};
        while(!q.empty())
        {
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        // q.push({{r,c},tm});
        tm=max(tm,t);
        q.pop();
      
        for(int i=0;i<4;i++)
        {
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow >=0 && nrow<n && ncol>=0 &&  ncol<m && grid[nrow][ncol]==1)
            {
                grid[nrow][ncol]=2;
                q.push({{nrow,ncol},t+1});
            }
        }
        }

    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int time=0;
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                  q.push({{i,j},0});
                }
            }
        }
        BFS(grid,q,time);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return time;
    }
};