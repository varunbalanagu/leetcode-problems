/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     void DFS(TreeNode* root,int &count,long long sum,int targetSum)
   {
    if(root==nullptr)
    {
        return;
    }
    sum=sum+root->val;
    // sol.push_back(root->val);
    if(sum==targetSum)
      count++;
   
        DFS(root->left,count,sum,targetSum);
        DFS(root->right,count,sum,targetSum);
     
    //  sol.pop_back();
   }

    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
        {
            return 0;
        }
        int count=0;
        long long sum=0;
        DFS(root,count,sum,targetSum);
        count+=pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);
        return count;
        
    }
};