class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>>ans(m,vector<char>(n,'#'));
        for(int i =0 ; i < m ; i++){
            for(int j =0 ; j < n ; j++){
                if(i==m-1||j==0){
                    ans[i][j]='.';
                }
            }
        }
        vector<string>res;
        for(int i =0 ; i < m ; i++){
            string str="";
            for(int j =0 ; j < n ; j++){
                str+=ans[i][j];
            }
            res.push_back(str);
        }
        return res;

    }
};