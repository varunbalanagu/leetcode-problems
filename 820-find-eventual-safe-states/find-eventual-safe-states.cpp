class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>adjrev(n);
        vector<int>inorder(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto &it:graph[i])
            {
                adjrev[it].push_back(i);
                inorder[i]++;

            }
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto &it:adjrev[node])
            {
                inorder[it]--;
                if(inorder[it]==0)
                {
                    q.push(it);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};