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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        vector<int>ans;
        while(temp!=0)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int maxi=-1;
        int sum=0;
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
           sum=sum+(ans[i]+ans[n-1-i]);
           maxi=max(sum,maxi);
           sum=0;
        }
        return maxi;
        
    }
};