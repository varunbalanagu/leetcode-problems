class Solution {
public:
    int minimumPushes(string word) {
        int n =word.size();
        map<char,int>mp;
        vector<int>ans;
        for(int i =0;i<n;i++){
            mp[word[i]]++;
        }
        int sum=0;
        int j=0,check=1;
        
        for(char i='a';i<='z';i++){
           if(mp[i]!=0){
            ans.push_back(mp[i]);
           }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        for(int i =0;i<ans.size();i++){
             if(i%8==0&&i!=0) check++;
            sum+=((check*8)/8)*ans[i];
            // cout<<sum<<endl;
           
            // cout<<check<<endl;
        }

        return sum;
    }
};