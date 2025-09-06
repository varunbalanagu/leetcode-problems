class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mp[changed[i]]++;
        }
        if(n%2!=0)
        {
            return {};
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++)
        {
           if(mp[changed[i]]==0)
           {
            continue;
           } 
            if(mp[2*changed[i]]==0)
            {
               return {};
            }
           ans.push_back(changed[i]);
           mp[changed[i]]--;
           mp[2*changed[i]]--;
        }
        return ans;
        
    }
};