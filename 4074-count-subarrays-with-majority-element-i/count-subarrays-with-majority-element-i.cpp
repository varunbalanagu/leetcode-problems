class Solution {
public:
    int countMajoritySubarrays(vector<int>& arr, int target) {
        int n=arr.size();
        int m=-1,c=0;
        for(int i=0;i<n;i++)
        {
            map<int,int>mp;
           for(int j=i;j<n;j++)
           {
             mp[arr[j]]++;
            
                if(mp[target]>(j-i+1)/2)
                {
                    c++;
                }
            
           }
        }
        return c;
        
    }
};