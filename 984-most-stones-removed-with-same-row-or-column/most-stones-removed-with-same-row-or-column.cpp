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
    int removeStones(vector<vector<int>>& edges) {
        int n=edges.size();
        int c=0;
        Disjoint dis(n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(edges[i][0]==edges[j][0])
                {
                    dis.FindByUnion(i,j);
                }
                else  if(edges[i][1]==edges[j][1])
                {
                   dis.FindByUnion(i,j);
                }
            }
        }
        // int c=0;
        for(int i=0;i<n;i++)
        {
            if(dis.FindParent(i)==i)
            {
                c++;
            }
        }
        return n-c;
        
    }
};