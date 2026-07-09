class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n+1);
        int MOD=1e9+7;
        int m=roads.size();
        for(int i =0 ;i < m ;i++)
        {
            adj[roads[i][0]].push_back({roads[i][2],roads[i][1]});
            adj[roads[i][1]].push_back({roads[i][2],roads[i][0]});
        }
        vector<long long>dis(n+1,LLONG_MAX);
        vector<long long>ways(n+1,0);
        priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>>pq;
        pq.push({0,0});
        dis[0]=0;
        ways[0]=1;
        while(!pq.empty())
        {
          auto node=pq.top();
          int weight=node.first;
          int value=node.second;
          pq.pop();
          if(weight>dis[value]) continue;
            //  ways[value]++;
                //  continue;
          
          for(auto&it:adj[value])
          {
            int adjweight=it.first;
            int adjnode=it.second;
            if(dis[adjnode]>dis[value]+adjweight)
            {
                dis[adjnode]=dis[value]+adjweight;
                ways[adjnode]=ways[value];
                pq.push({dis[adjnode],adjnode});
            }
            else if(dis[adjnode]==dis[value]+adjweight)
            {
                ways[adjnode]=(ways[adjnode]+ways[value])%MOD;
            }
          }
        }
        return ways[n-1];
    }
};