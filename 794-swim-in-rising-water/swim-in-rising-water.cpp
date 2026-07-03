 class Disjoint{
    vector<int>parent,rank;
    public:
    Disjoint(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
    }
    int FindParent(int n){
        if(parent[n]==n)
        {
            return n;
        }
        return parent[n]=FindParent(parent[n]);
    }
    int FindByUnion(int u,int v)
    {
        int ulp_u=FindParent(u);
        int ulp_v=FindParent(v);
        if(ulp_u==ulp_v)
        {
            // cout<<ulp_u<<ulp_v<<endl;
           return 1;
        }
         if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v]<rank[ulp_u])
        {
            parent[ulp_v]=ulp_u;
        }
        else
        {
            parent[ulp_u]=ulp_v;
            rank[ulp_u]++;
        }
        return 0;
    }
};
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
      vector< vector< bool >> active(n, vector<bool>(n, false));
        vector< pair <int,int>> pos(n * n);
        Disjoint dis(n*n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                pos[grid[i][j]] = {i, j};
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        for(int t = 0;t < n*n ;t ++)
        {
            auto [r,c] = pos[t];
            active[r][c] = true;
            int node = n * r + c;
            for(int k = 0 ;k < 4; k ++)
            {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if(nr >= 0 && nr < n && nc >= 0 && nc < n && active[nr][nc])
                {
                    int adj = n * nr + nc;
                    dis.FindByUnion(node , adj);

                }
            }
              if(dis.FindParent(0)==dis.FindParent(n*n-1))
         return t;
        }
      
         return -1;

        
    }
};