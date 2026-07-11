
class Solution {
public:
    void DFS(int start,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&sol)
    {
         vis[start]=true;
         sol.push_back(start);
         for(int i:adj[start])
         {
            if(!vis[i]){
            DFS(i,adj,vis,sol);
            }
         }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>vis(n,false);
        
       // int sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            vector<int>sol;
            if(!vis[i])
            {
               // c++;
                DFS(i,adj,vis,sol);
                int sum=0;
                for(int i:sol)
                {
                    sum=sum+adj[i].size();
                }
                sum=sum/2;
                int k=sol.size();
                if(sum==(k*(k-1))/2)
                {
                    c++;
                }
            }

        }
        return c;
        
    }
};