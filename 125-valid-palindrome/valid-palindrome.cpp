class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0 ,high = s.size()-1;
        while(low < high){
            if(!isalpha(s[low])&&!isdigit(s[low])){
                cout<<"hi";
                low++;
                continue;
            }
            if(!isalpha(s[high])&&!isdigit(s[high])){
                cout<<"hi";
                high--;
                continue;
            }
            else if(tolower(s[low])!=tolower(s[high])){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};