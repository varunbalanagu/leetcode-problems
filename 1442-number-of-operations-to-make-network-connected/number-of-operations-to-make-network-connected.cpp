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
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<bool>vis(n+1,false);
        Disjoint dis(n);
        int sum=0;
        for(int i=0;i<connections.size();i++)
        {
            if(dis.FindByUnion(connections[i][0],connections[i][1])==1)
            {
                sum++;
            }
        
        }
        int c=0;
        bool flag=false;
        // cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            if(dis.FindParent(i)==i)
            {
                flag=true;
               c++;
            }

        }
        // cout<<c<<endl;
        // cout<<sum<<" "<<flag;
        if(flag==false) return 0;
        else if(c-1>sum) return -1;
        else return c-1;

    }
};