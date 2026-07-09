class Disjoint{
    vector<long long>rank,parent;
    public:
      Disjoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
      }
      int FindParent(int n)
      {
        if(n==parent[n])
        {
            return n;
        }
        return parent[n]=FindParent(parent[n]);
      }
      bool FindByUnion(long long u,long long v)
      {
        int ulp_u=FindParent(u);
        int ulp_v=FindParent(v);
        if(ulp_u==ulp_v)
        {
            return true;
        }
         if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v]<rank[ulp_u])
        {
            parent[ulp_v]=ulp_u;
        }
        else
        {
            parent[ulp_u]=ulp_v;
            rank[ulp_v]++;
        }
        return false;
        
    }
      

    
};
class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
       Disjoint dis(n);
       for(int i =0;i<n-1;i++)
       {
         if(abs(nums[i]-nums[i+1])<=maxDiff)
         dis.FindByUnion(i,i+1);
       }
       vector<bool>ans;
       for(int i =0;i < queries.size() ;i ++)
       {
          
          if(dis.FindParent(queries[i][0])==dis.FindParent(queries[i][1]))
          {
       
            ans.push_back(true);
          }
          else{
       
            ans.push_back(false);
          }
       }
       return ans;   
    }
};