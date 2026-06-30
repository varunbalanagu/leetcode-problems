class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        priority_queue<vector<int> ,vector<vector<int>>,greater<vector<int>>>pq;
        vector<bool>vis(n,false);
        vector<int>mind(n,INT_MAX);
        pq.push({0,0,-1});
        int sum=0;
        while(!pq.empty())
        {
          int wt=pq.top()[0];
          int node=pq.top()[1];
          int parent=pq.top()[2];
            pq.pop();
          if(!vis[node])
          {
            sum=sum+wt;
            vis[node]=true;
          
          }
          for(int i=0;i<n;i++)
          {
            if(!vis[i])
            {
               int dis=abs(points[i][0]-points[node][0])+abs(points[i][1]-points[node][1]);
                 if (dis < mind[i]) {
                        mind[i] = dis;
                        pq.push({dis, i, node});
            }
          }
          }
        }
          return sum;


        }
        
    
};