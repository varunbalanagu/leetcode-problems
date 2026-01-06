class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        vector<int>adj[num];
        for(int i=0;i<pre.size();i++)
        {
          adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int>inorder(num,0);
        for(int i=0;i<num;i++)
        {
            for(auto&it:adj[i])
            {
                inorder[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>res;
        while(!q.empty())
        {
            int node=q.front();
            res.push_back(node);
            q.pop();
            for(auto&i:adj[node])
            {
                inorder[i]--;
                if(inorder[i]==0)
                {
                    q.push(i);
                }
            }
        }
        if(res.size()!=num)
        return {};
        return res;
        
        
    }
};