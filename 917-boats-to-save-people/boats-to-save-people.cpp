class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int c =0;
        int low = 0 ,high = n-1;
        sort(people.begin(),people.end());
        while(low < high){
            if(people[low]+people[high]<=limit){
              c++;
              low++;
              high--;
            }
            else{
                high--;
            }
        }
        return c + (n-c*2);
        
    }
};