class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n =word1.size();
       int m =word2.size();
       string ans="";
       int c=0;
       int i =0 , j =0;
       while(i < n && j < m){
        if(c%2==0){ ans+=word1[i]; i++;}
        else {ans+=word2[j]; j++; }
        c++;
       }
       while(i<n){
        ans+=word1[i];
        i++;
       } 
       while(j < m){
        ans+=word2[j];
        j++;
       }
       return ans;
    }
};