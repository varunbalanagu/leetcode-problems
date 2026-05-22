class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int m=0;
        // set<int>st;
        map<int,int>mp;
        for(int r=0;r<n;r++)
        {
           mp[fruits[r]]++;
           while(mp.size()>2&&l<=r)
           {
            // cout<<mp.size()<<r<<endl;
            mp[fruits[l]]--;
            if(mp[fruits[l]]==0)
            {
                // cout<<"HI"<<endl;
              mp.erase(fruits[l]);
            //    cout<<mp.size()<<endl;
            }
             l++;
           
           
           }
            m=max(m,(r-l+1));
          
          
        }
        if(m==0) return fruits.size();
        return m;

        
        
    }
};