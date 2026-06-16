class Solution {
public:
   bool check(int row,int col,vector<string>&board,int n)
   {
         int crow=row;
         int ccol=col;
         while(crow>=0&&ccol>=0)
         {
            if(board[crow][ccol]=='Q')
            {
                return false;
            }
            crow--;
            ccol--;
         }
         crow=row;
          ccol=col;
           while(crow<n&&ccol>=0)
         {
            if(board[crow][ccol]=='Q')
            {
                return false;
            }
            crow++;
            ccol--;
         }
         crow=row;
          ccol=col;
          while(ccol>=0)
          {
            if(board[crow][ccol]=='Q')
            {
                return false;
            }
            ccol--;
          }
          return true;

   }
    void identify(int col,vector<string>&board,vector<vector<string>>&sol,int n){
        if(col==n)
        {
            sol.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(check(row,col,board,n))
            {
                board[row][col]='Q';
                identify(col+1,board,sol,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        vector<vector<string>>sol;
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        identify(0,board,sol,n);
        return sol;
    }
};