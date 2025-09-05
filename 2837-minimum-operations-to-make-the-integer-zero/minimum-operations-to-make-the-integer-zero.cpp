class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int mini=INT_MAX;
        int c=0;
        for(int i=1;i<=60;i++)
        {
             long long val = (long long)num1 - (long long)i * num2;
            if (val < 0) continue;

            int bits = __builtin_popcountll(val); 
            if (bits <= i && i <= val) {
                return i;
            }

        }
        return -1;
        
    }
};