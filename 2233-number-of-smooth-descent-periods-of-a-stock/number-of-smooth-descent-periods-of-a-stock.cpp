class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long  count=0;
        count+=n;
        long long temp=0;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]-prices[i+1]==1)
            {
                temp++;
            }
            else
            {
                // temp++;
                count+=temp*(temp+1)/2;
                temp=0;
            }
        }
        count+=temp*(temp+1)/2;
        return count;
    }
};