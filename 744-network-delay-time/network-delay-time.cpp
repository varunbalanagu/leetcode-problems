class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dis(n+1,1e9);
        dis[k]=0;
        for(int i =0 ;i<=n-1;i++)
        {
            vector<int>temp=dis;
            for(auto & edge:times)
            {
                int u =edge[0];
                int v=edge[1];
                int wt=edge[2];
                if(dis[u]!=1e8 && dis[u]+wt<temp[v])
                {
                    temp[v]=dis[u]+wt;
                }
            }
            dis=temp;
        }
        int m =INT_MIN;
        for(int i =1;i<=n;i++)
        {
            cout<<dis[i]<<endl;
            if(dis[i]==1e9) return -1;
            m=max(m,dis[i]);
        }
        return m;
    }
};