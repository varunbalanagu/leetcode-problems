class Solution {
public:
    bool isPalindrome(string s) {
       int  n = s.size();
        string ans="";
        // cout<<s[0]+32;
        for(int i =0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                // cout<<s[i]<<endl;
            s[i]=tolower(s[i]);
            }
             if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                // cout<<s[i]<<endl;
               ans+=s[i];    
            }
            else{
                continue;
            }
            
        }
        cout<<ans<<endl;
        int low =0 ,high = ans.size()-1;
        while(low < high){
            if(ans[low]!=ans[high]){
                return false;
            }
            low++; high--;
        }
        return true;
    }
};