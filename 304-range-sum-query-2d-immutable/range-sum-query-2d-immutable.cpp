class NumMatrix {
public:
     vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& matrix) {
          int n = matrix.size();
          prefix.resize(n,vector<int>(matrix[0].size()));
      
        for(int i =0 ;i < n ;i++){
            prefix[i][0]=matrix[i][0];
            for(int j = 1 ;j < matrix[i].size() ; j++){
              prefix[i][j]=prefix[i][j-1]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum =0;
        if(col1==0){
            for(int i =row1;i<=row2;i++){
                sum+=prefix[i][col2];
            }
        }
        else{
            for(int i =row1;i<=row2;i++){
                sum+=prefix[i][col2]-prefix[i][col1-1];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */