class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++)
        {
            int row=indices[i][0];
            // cout<<row;
            int col=indices[i][1];
            // cout<<col;
            for(int j=0;j<n;j++)
            {
                
                ans[row][j]++;
                 cout<<ans[row][j]<<" ";
            }
            cout<<endl;
            for(int j=0;j<m;j++)
            {
                ans[j][col]++;
                cout<<ans[j][col]<<" ";
            }
            cout<<endl;
        }
        int c=0;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                // cout<<ans[i][j]<<" ";
                if(ans[i][j]%2!=0)
                {
                    c++;
                }
            }
        }
        return c;
        
    }
};