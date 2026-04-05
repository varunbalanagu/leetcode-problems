class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int up=0,lo=0,ri=0,le=0;
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U')
            up++;
            else if(moves[i]=='D')
            lo++;
            else if(moves[i]=='L')
            le++;
            else
            ri++;
        }
        if(up==lo&&le==ri)
        return true;
        return false;
        
    }
};