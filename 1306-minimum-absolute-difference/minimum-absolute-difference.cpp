class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int m=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            m=min(m,abs(arr[i]-arr[i+1]));
        }

        cout<<m<<endl;
        // res.push_back({arr[0],arr[1]});
        for(int i=1;i<n;i++)
        {
            if(abs(arr[i]-arr[i-1])==m)
            {
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
        
    }
};