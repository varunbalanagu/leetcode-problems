class Solution {
public:
    bool permentation(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
    bool checkInclusion(string s1, string s2) {
        int n =s1.size();
        int m=s2.size();
        if(m<n) return false;
        string str;
        for(int i =0;i<n;i++){
          str.push_back(s2[i]);
        }
        if(permentation(str,s1)) return true;
        for(int i =n;i<m;i++){
            str.erase(str.begin());
            str.push_back(s2[i]);
             if(permentation(str,s1)) return true;
        }
        return false;
    }
};