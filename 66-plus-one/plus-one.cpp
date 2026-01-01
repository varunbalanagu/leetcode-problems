class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=0;
        // digits[n-1]++;
        // carry=0;
        vector<int>ans;
        // ans.push_back(digits[n-1]%10);
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                digits[i]++;
            }
            digits[i]+=carry;
            carry=0;
            ans.push_back(digits[i]%10);
            carry+=digits[i]/10;
        }
        if(carry!=0)
        {
             ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};