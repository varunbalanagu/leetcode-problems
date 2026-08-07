class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int mi=INT_MAX;
       int ma=INT_MIN;
       for(int i =0;i<n;i++){
        mi=min(mi,prices[i]);
        ma=max(ma,abs(mi-prices[i]));
       }
        return ma; 
    }
   
};