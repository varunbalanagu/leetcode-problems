class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // int n  = times.size();
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i =0 ;i<times.size() ;i++)
        {
            adj[times[i][0]].push_back({times[i][2],times[i][1]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>>pq;
        vector<int>dis(n+1 , INT_MAX);
        pq.push({0,k});
        dis[k]=0;
        int sum=0;
        while(!pq.empty())
        {
            auto node=pq.top();
            int weight = node.first;
            int value=node.second;
            pq.pop();
            if(weight>dis[value]) continue;
            // sum+=weight;
            for(auto &it:adj[value])
            {
                 int adjweight=it.first;
                 int adjnode=it.second;
                 if(dis[value]+adjweight<dis[adjnode])
                 {
                    dis[adjnode]=dis[value]+adjweight;
                    pq.push({dis[adjnode],adjnode});
                 }
            }
        }
        int m =-1;
        for(int i =1 ;i<=n;i++)
        {
            if(dis[i]==INT_MAX)
            return -1;
            m=max(m,dis[i]);
        }
        return m;
        
    }
};