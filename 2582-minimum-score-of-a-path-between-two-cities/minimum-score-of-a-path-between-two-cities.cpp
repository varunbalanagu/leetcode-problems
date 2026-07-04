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
    int minScore(int n, vector<vector<int>>& roads) {
        Disjoint dis(n);
        for(int i=0;i<roads.size();i++)
        {
            dis.FindByUnion(roads[i][0],roads[i][1]);
        }
        int m=INT_MAX;
        int K=dis.FindParent(n);
        for(int i=0;i<roads.size();i++)
        {
            if(dis.FindParent(roads[i][0])==K)
            {
                m=min(m,roads[i][2]);
            }
        }
        return m;

        
    }
};