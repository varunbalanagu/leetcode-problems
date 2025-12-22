class Solution {
public:
    void DFS(int i,vector<vector<int>>&adj,vector<bool>&vis)
    {
        vis[i]=true;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                DFS(it,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
            if(isConnected[i][j]==1&&i!=j)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
           }
        }
        vector<bool>vis(n,false);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                c++;
                DFS(i,adj,vis);
            }
        }
        return c;
        
    }
};