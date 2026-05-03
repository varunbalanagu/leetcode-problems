class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int t=goal.size();
        for(int i=0;i<n+1;i++)
        {
            
            s.push_back(s[0]);
            s.erase(s.begin());
            if(s==goal)
            {
                return true;
            }
        }
        return false;
    }
};