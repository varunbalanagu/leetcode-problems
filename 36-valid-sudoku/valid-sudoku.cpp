class Solution {
public:

   bool check(int row,int col,vector<vector<char>>&board,char c ){
    for(int i =0;i < 9;i++){
        if(i!=row && board[i][col]==c){
            return false;
        }
        if(i!=col &&board[row][i]==c){
            return false;
        }
        int rr=3*(row/3)+(i/3);
        int cc=3*(col/3)+(i%3);
        if(rr!=row && cc!=col && board[rr][cc]==c){
            return false;
        }
    }
    return true;
   }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i < 9;i++){
            for(int j =0 ;j < 9;j++){
                if(board[i][j]!='.'){
                    if(!check(i,j,board,board[i][j]))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};