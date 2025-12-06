class Solution {
    public void gameOfLife(int[][] board) {
        int n=board.length;
        int m=board[0].length;
        int [][]temp=new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp[i][j]=board[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<board[0].length;j++)
            {
                 int dead=0,live=0;
                  m=board[0].length;
               if(j<m-1)
               {
               if(temp[i][j+1]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(j>0)
               {
               if(temp[i][j-1]==0)
               {
                  dead++;
               }
               else
               {
                live++;
               }
               }
               if(i<n-1)
               {
               if(temp[i+1][j]==0)
               {
                 dead++;
               }
               else
               {
                 live++;
               }
               }
               if(i>0)
               {
               if(temp[i-1][j]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(i<n-1&&j<m-1)
               {
               if(temp[i+1][j+1]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(i>0&&j>0)
               {
               if(temp[i-1][j-1]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(i>0&&j<m-1)
               {
               if(temp[i-1][j+1]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(j>0&&i<n-1)
               {
               if(temp[i+1][j-1]==0)
               {
                dead++;
               }
               else
               {
                live++;
               }
               }
               if(temp[i][j]==1&&live<2)
            {
               board[i][j]=0;
            }
            else if(temp[i][j]==1&&(live==2||live==3))
            {
                board[i][j]=1;
            }
            else if(temp[i][j]==1&&live>3)
            {
                board[i][j]=0;
            }
            else if(temp[i][j]==0&&live==3)
            {
                board[i][j]=1;
            }
            else
            {
                temp[i][j]=board[i][j];
            }
            
            }
            
        }
        // return board;
        
    }
}