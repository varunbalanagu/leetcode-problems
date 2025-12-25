class Solution {
public:
    void BFS(vector<vector<int>>&image,int row,int col,int color,int initialcolor)
    {
      
        int n=image.size();
        int m=image[0].size();
         image[row][col]=color;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
           
            q.pop();
            int dc[4]={-1,0,1,0};
            int dr[4]={0,-1,0,1};
            for(int i=0;i<4;i++)
            {
             int nrow=r+dr[i];
             int ncol=c+dc[i];
             if(nrow >=0 && nrow < n  && ncol >=0 && ncol < m && image[nrow][ncol]==initialcolor)
             {
                image[nrow][ncol]=color;
                q.push({nrow,ncol});
             }
            }
        }


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor=image[sr][sc];
        if(initialcolor==color)
        {
            return image;
        }
        BFS(image,sr,sc,color,initialcolor);
        return image;
        
    }
};