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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        Disjoint dis( n);
        vector<vector<string>>ans;
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<accounts[i].size();j++)
            {
                string mail=accounts[i][j];
                if(mp.find(mail)==mp.end())
                {
                    mp[mail]=i;
                }
                else
                {
                    dis.FindByUnion(i,mp[mail]);
                }
            }
        }
        vector<string>merged[n];
        for(auto it:mp)
        {
            string mail=it.first;
            int node=dis.FindParent(it.second);
            merged[node].push_back(mail);
        }
        for(int i=0;i<n;i++)
        {
            if(merged[i].size()==0)
            continue;
            // sort(merged[i].begin(),merged[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:merged[i])
            {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
        
        
    }
};