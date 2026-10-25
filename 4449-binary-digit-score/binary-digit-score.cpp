class Solution {
public:
    int calculateScore(int a, int b) {
        int set1=0;
        int set2=0;
        while(a>0){
             set1++;
            a=a&(a-1);
           
        }
        while(b >0){
            set2++;
            b=b&(b-1);
        }
        if(set1>=set2) return set1*set2;
        return set2/set1;
    }
};