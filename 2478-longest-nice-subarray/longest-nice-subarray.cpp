class Solution {
public:
    string convert(int a){
        string ans;
        int r;
        while(a>0){
            r=a%2;
            ans.push_back(r+'0');
            a=a/2;
        }
        while(ans.size()<32){
            ans.push_back('0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size(),l=0;
        vector<int> b(32,0);
        string bin;
        int res=1;
        bool flag;
        for(int end=0;end<n;end++){
            bin=convert(nums[end]);
            for(int i=0;i<32;i++)
            {
                if(bin[i]=='1'){
                    b[i]++;
                }
            }
            while(true){
                flag=false;
                for(int i=0;i<32;i++){
                    if(b[i]>1){
                        flag=true;
                    }
                }
                if(!flag)
                break;
                bin=convert(nums[l]);
                for(int i=0;i<32;i++){
                    if(bin[i]=='1'){
                        b[i]--;
                    }
                }
                l++;

            }
            res=max(res,end-l+1);
        }
        return res;
        
    }
};