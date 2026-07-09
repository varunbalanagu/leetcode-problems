class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n =heights.size();
        int m =heights[0].size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<vector<pair<int,int>>>adj(n*m);
        for(int i =0 ;i<n;i++)
        {
            for(int j =0;j<heights[i].size();j++)
            {
                int col=heights[0].size();
                int value=i*col+j;
                int dr[]={-1,1,0,0};
                int dc[]={0,0,-1,1};
                for(int k =0;k<4;k++)
                {
                    int ar=i+dr[k];
                    int ac=j+dc[k];
                   
                    if(ar>=0 && ar<n && ac>=0 && ac<col)
                    {
                         int nextnode=ar*col+ac;
                        int nextweight=abs(heights[i][j]-heights[ar][ac]);
                        adj[value].push_back({nextweight,nextnode});
                    }

                }
             
                
            }
        }
        pq.push({0,0});
        vector<int>dis(n*m,INT_MAX);
        dis[0]=0;
        while(!pq.empty())
        {
           auto top=pq.top();
           int weight=top.first;
           int node=top.second;
           pq.pop();
           if(weight>dis[node]) continue;
           if(node==n*m-1) return weight;
           for(auto &it:adj[node])
           {
              int tempweight=it.first;
              int tempnode=it.second;
              int newWeight=max(dis[node],tempweight);
              if(dis[tempnode]>newWeight)
              {
                dis[tempnode]=newWeight;
                pq.push({dis[tempnode],tempnode});

              }
           }
        }
        return dis[n*m-1];
        
        
    }
};