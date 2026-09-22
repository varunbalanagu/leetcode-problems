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
        while(!qt.empty()){
            vector<int>sol;
            int n = qt.size();
          
          for(int  i =0 ; i < n ; i++){
             TreeNode *node =qt.front();
            qt.pop();
            sol.push_back(node->val);
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
           ans.push_back(sol);
        }
        int sum=0;
        int m = ans.size();
        for(int i =0 ; i < ans[m-1].size();i++){
            sum+=ans[m-1][i];
        }
       
        return sum;

    }
};