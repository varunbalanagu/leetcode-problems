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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        //vector<int>arr;
        vector<int>nums;
        while(temp1!=0)
        {
            nums.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=0)
        {
            nums.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(nums.begin(),nums.end());
        temp1=list1;
        int i=0;
        int n=nums.size();

        while(temp1!=0)
        {    
            if(temp1->next==NULL&&list2!=NULL)
            {
                temp1->next=list2;
                break;
            }
            temp1->val=nums[i];
            i++;
            temp1=temp1->next;        
        }
        // if(temp1!=NULL)
        // {
        // cout<<temp1->val<<" ";
        // temp1=temp1->next;
        // }
        if(list1==NULL)
        {
        list1=list2;
        temp1=list1;
        }
        while(temp1!=0)
        {
            //cout<<"s";
              temp1->val=nums[i];
             i++;
            temp1=temp1->next;

        }
        return list1;
    }
};