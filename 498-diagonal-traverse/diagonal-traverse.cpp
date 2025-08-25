class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        vector<int>res;
        vector<int>ans;
        bool flag=true;
        int a,b;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(visited[i][j]!=1)
                {
                    
                    a=i;
                    b=j;
                   while(a<n&&b>=0)
                   {
                    
                    res.push_back(mat[a][b]);
                    visited[a][b]=1;
                    cout<<mat[a][b]<<" ";
                    a++;
                    b--;

                    
                   }
                   if(flag==true)
                   reverse(res.begin(),res.end());
                   ans.insert(ans.end(),res.begin(),res.end());
                   res.clear();
                   flag=!flag;
                   cout<<endl;
                }
            }
        }
        return ans;
        
    }
};