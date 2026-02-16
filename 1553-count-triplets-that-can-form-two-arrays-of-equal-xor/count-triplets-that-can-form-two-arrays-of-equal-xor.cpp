class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int ans=arr[i];
            for(int j=i+1;j<n;j++)
            {
               
              ans=ans^arr[j];
              if(ans==0)
              {
                c+=(j-i);
              }
            }
        }
        return c;
    }
};