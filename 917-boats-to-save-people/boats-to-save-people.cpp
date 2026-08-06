class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
           int n =people.size();
           int low =0 ,high =n-1;
           int c=0;
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
           return c+(n -2*c);      
    }
};