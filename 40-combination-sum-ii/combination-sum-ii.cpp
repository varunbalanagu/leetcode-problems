class Solution {
public:
    void identify(vector<vector<int>>&sol,vector<int>&ans,vector<int>&candidates,int target,int index)
    {
       
            if(target==0)
            {
                sol.push_back(ans);
                  return ;
                // mp[ans]++;
            }
            
          
        

        
         for(int i=index;i<candidates.size();i++)
    {
        if(i > index && candidates[i] == candidates[i-1])
            continue;        

        if(candidates[i] > target)
            break;     
            ans.push_back(candidates[i]);
            
            identify(sol,ans,candidates,target-candidates[i],i+1);
            ans.pop_back();
        }
        //  identify(sol,ans,candidates,target,index+1,mp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>sol;
        vector<int>ans;
           vector<vector<int>>res;
           map<vector<int>,int>mp;
        identify(sol,ans,candidates,target,0);
        
        // for(int i=0;i<sol.size();i++)
        // {
        //     if(mp.find(sol[i])!=mp.end())
        //     {
        //         continue;
        //     }
        //     res.push_back(sol[i]);
        //     mp[sol[i]]++;
        
        return sol;

    }
};