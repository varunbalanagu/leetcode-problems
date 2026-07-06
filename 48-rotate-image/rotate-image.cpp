class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
          int n  =matrix.size();
        vector<vector<int>>ans(n,vector<int>(n));
      
        for(int i=0;i<n;i++)
        {
            for(int j =n-1 ;j >=0;j--)
            {
                ans[i][n-j-1]=matrix[j][i];
            }

        }
        int tempi=0,tempj=0;
        for(int i =0 ;i < n ; i++)
        {
            for(int j =0 ;j <n ;j++)
            {
              matrix[i][j]=ans[i][j];           
            }
            //  tempi++;
        }
        

        
    }
};