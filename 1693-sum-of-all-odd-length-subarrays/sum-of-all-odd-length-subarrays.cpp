class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int totalsum=0;
        for(int i=0;i<n;i++)
        {

            totalsum=totalsum+((((n-i)*(i+1)) + 1)/2)*arr[i];
        }
        return totalsum;
    }
};