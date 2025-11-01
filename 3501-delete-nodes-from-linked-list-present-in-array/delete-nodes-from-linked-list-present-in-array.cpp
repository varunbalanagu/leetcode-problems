/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode*temp=head;
        int n=nums.size();
        map<int,int>fre;
        vector<int>sol;
        for(int i=0;i<n;i++)
        {
            fre[nums[i]]++;
        }
        while(temp!=0)
        {
            if(fre[temp->val]==0)
            {
                sol.push_back(temp->val);

            }
            temp=temp->next;

        }
      /*  for(int i=0;i<sol.size();i++)
        {
            cout<<sol[i];
        }*/
        temp=head;
        int m=sol.size();
        //int i=0;
       for(int i=0;i<m;i++)
       {
        temp->val=sol[i];
       // cout<<temp->val;
       
        if(i==m-1)
        {
            temp->next=NULL;
            break;

        }
         temp=temp->next;
       }
       
       return head;
    }
};