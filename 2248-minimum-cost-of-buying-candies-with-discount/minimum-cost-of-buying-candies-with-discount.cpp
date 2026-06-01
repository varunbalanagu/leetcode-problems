class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        int c=0;
        int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            // cout<<c<<endl;
            if(c!=0&&c%2==0)
            {
                // continue;
                c=0;
            }
            else{
            sum+=cost[i];
            c++;
            }

        }
        return sum;
        
    }
};