class Solution {
public:
    bool isValid(string s) {
        int flag=1;
    int n=s.size();
    char st[n];
    int top=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{'||s[i]=='['||s[i]=='(')
        {
            top++;
            st[top]=s[i];
        }
        else if((top!=-1)&&((s[i]=='}'&&st[top]=='{')||(s[i]==')'&&st[top]=='(')||(s[i]==']'&&st[top]=='[')))
        {

                top--;
        }
            else
            {
                flag=0;
                break;
            }
        }
        if(top!=-1)
        flag=0;
return flag;
        
    }
};