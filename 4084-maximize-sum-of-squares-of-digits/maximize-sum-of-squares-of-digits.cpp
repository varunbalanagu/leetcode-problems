class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
         string res="";
         vector<int> ans;
         if(sum>num*9)
         return "";
        while(num>0)
        {
            if(num==0)
            break;
            // cout<<num<<endl;
            if(sum>9)
            {
                // res=res+'9';
                // cout<<"s";
                ans.push_back(9);
                sum-=9;
                num--;
            }
            else
            {
                // res+=sum+'0';
                ans.push_back(sum);
                sum=0;
                num--;
            }
        }
        for(auto i:ans)
        res.push_back(i+'0');
        // cout<<res<<endl;
        if(sum>0)
        return "";
        return res;
        
    }
        
    
};