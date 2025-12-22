class Solution {
public:
    void BFS(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int dc[4]={-1,0,1,0};
            int dr[4]={0,1,0,-1};
            for(int k=0;k<4;k++)
            {
                int nrow=r+dr[k];
                int ncol=c+dc[k];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
                {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }

            }
        }
        

        

    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    c++;
                    BFS(i,j,vis,grid);
                }
            }
        }
        return c;
    }
};