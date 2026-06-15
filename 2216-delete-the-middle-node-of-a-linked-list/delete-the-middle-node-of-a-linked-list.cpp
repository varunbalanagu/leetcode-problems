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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode*temp=head;
        vector<int>ans;
        while(temp!=0)
        {
            count++;
            ans.push_back(temp->val);
            temp=temp->next;
        }
    
            int k=ans[count/2];
        ListNode*newhead=NULL;
        ListNode*newtail=NULL;
        for(int i=0;i<ans.size();i++)
        {
            if(i!=count/2)
            {
                ListNode*newnode=new ListNode(ans[i]);
                if(newhead==NULL)
                {
                    newhead=newnode;
                    newtail=newnode;
                }
                else
                {
                    newtail->next=newnode;
                    newtail=newtail->next;
                }
            }
        }
        return newhead;
    }
};