class Disjoint{
    vector<int>rank,parent;
    public:
      Disjoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
      }
      int FindParent(int n)
      {
        if(n==parent[n])
        {
            return n;
        }
        return parent[n]=FindParent(parent[n]);
      }
      bool FindByUnion(int u,int v)
      {
        int ulp_u=FindParent(u);
        int ulp_v=FindParent(v);
        if(ulp_u==ulp_v)
        {
            return true;
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
        return false;
        
    }
      

    
};


class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        Disjoint dsa(n);
        for(int i=0;i<n;i++)
        {
            if(dsa.FindByUnion(edges[i][0],edges[i][1]))
            return {edges[i][0],edges[i][1]};
        }
        return {};
        
    }
};