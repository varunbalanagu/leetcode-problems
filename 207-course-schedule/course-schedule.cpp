class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        int n=pre.size();
        vector<int>inorder(num,0);
        vector<int>adj[num];
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
            // adj[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i=0;i<num;i++)
        {
            for(int it:adj[i])
            {
                inorder[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<num;i++)
        {
            if(inorder[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>temp;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            temp.push_back(node);
            for(auto&i:adj[node])
            {
                inorder[i]--;
                if(inorder[i]==0)
                {
                    q.push(i);
                }
            }
        }
        if(temp.size()==num)
        return true;
        else
        return false;
        
    }
};