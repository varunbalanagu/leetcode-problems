class Disjoint{
     vector<int>rank;
     vector<int>parent;
    public:
    Disjoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
    }
    int FindParent(int node)
    {
        if(node==parent[node])
        {
            return node;
        }
        return parent[node]=FindParent(parent[node]);
    }
    void FindByUnion(int u,int v)
    {
        int ulp_v=FindParent(v);
        int ulp_u=FindParent(u);
        if(ulp_u==ulp_v)
        {
            return;
        }
        if(ulp_u<ulp_v)
        {
             parent[ulp_u]=ulp_v;
        }
        else if(ulp_v<ulp_u)
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
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n =points.size();
        vector<pair<int,pair<int,int>>>edges_list;
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            int wt=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            edges_list.push_back({wt,{i,j}}); 
        }
        }
        sort(edges_list.begin(),edges_list.end());
        Disjoint dis(n);
        int sum=0;
        for(auto &it:edges_list)
        {
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            if(dis.FindParent(u)!=dis.FindParent(v))
            {
                sum=sum+wt;
                dis.FindByUnion(u,v);
            }
        }
        return sum;

        
    }
};