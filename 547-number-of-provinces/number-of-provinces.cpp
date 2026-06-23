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
  int FindParent(int node){
    if(node==parent[node])
    return node;
    return parent[node]=FindParent(parent[node]);
  }
  void FindByUnion(int u,int v)
  {
    int ulp_u=FindParent(u);
    int ulp_v=FindParent(v);
    if(ulp_u==ulp_v) return;
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
        parent[ulp_v]=ulp_u;
        rank[ulp_u]++;
    }
  }
};


class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
         Disjoint disjoint(n);
         int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
            disjoint.FindByUnion(i,j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(disjoint.FindParent(i)==i)
            {
                c++;
            }
        }
        return c;
        
    }
};