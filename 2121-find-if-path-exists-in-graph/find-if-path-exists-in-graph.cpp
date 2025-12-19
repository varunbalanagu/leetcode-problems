class Solution {
public:
    bool DFS(int source,vector<vector<int>>&edges,int destination,vector<bool>&vis)
    {
       
        if(source==destination)
        {
            return true;
        }
         vis[source]=true;
        for(int i:edges[source])
        {
            if(!vis[i])
            {
              if(DFS(i,edges,destination,vis))
              {
                return true;
              }
            
            }
            
        }
        return false;
       
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    // int n=edges.size();
    vector<bool>vis(n,false);
    int k=source;
    vector<vector<int>>adj(n);
    for(int i=0;i<edges.size();i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    return  DFS(source,adj,destination,vis);
        
    }
};