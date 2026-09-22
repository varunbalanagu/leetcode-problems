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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>qt;
        qt.push(root);
        vector<vector<int>>ans;
        vector<int>sol;
        sol.push_back({root->val});
        ans.push_back(sol);
        sol.clear();
        int res=0;
        while(!qt.empty()){
            vector<int>sol;
            int n = qt.size();
          int sum=0;
          for(int  i =0 ; i < n ; i++){
             TreeNode *node =qt.front();
            qt.pop();
            sum+=(node->val);
            if(node->left!=nullptr){
                qt.push(node->left);
                // sol.push_back(node->left->val);
            }
            if(node->right!=nullptr){
                 qt.push(node->right);
            //    sol.push_back(node->right->val);
            }
           
            // sol.clear();
          }
           res=sum;
           sum=0;
        }
        
       
        return res;

    }
};