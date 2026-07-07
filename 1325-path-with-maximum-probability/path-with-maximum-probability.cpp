class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<double,double>>>adj(n);
        vector<double>dis(n,0.0);
        for(int i =0 ;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({succProb[i],edges[i][1]});
            adj[edges[i][1]].push_back({succProb[i],edges[i][0]});
        }
        priority_queue<pair<double,int>>pq;
        pq.push({1.0,start});
        dis[start]=1.0;
        double sum=1.00000;
        while(!pq.empty())
        {
            auto node = pq.top();
            double prop=node.first;
            int value=node.second;
            pq.pop();
           if(prop<dis[value]) continue;
           if(value==end) return prop;
           for(auto &it:adj[value])
           {
             double adjweight=it.first;
             int adjvalue=it.second;
             if(dis[value]*adjweight>dis[adjvalue])
             {
                dis[adjvalue]=dis[value]*adjweight;
                pq.push({dis[adjvalue],adjvalue});
             }
           }
        }
        return 0.0;
    }
};