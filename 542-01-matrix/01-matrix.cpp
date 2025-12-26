class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    dis[i][j]=0;
                 q.push({i,j});
                }

            }
        }
        //BFS
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            // int t=q.front().second;
            // dis[r][c]=t;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr < n && nc < m && nr >= 0 && nc >=0 && dis[nr][nc]>dis[r][c]+1)
                {
                    dis[nr][nc]=dis[r][c]+1;
                    q.push({nr,nc});

                }
            }
        }
        return dis;
    }
};