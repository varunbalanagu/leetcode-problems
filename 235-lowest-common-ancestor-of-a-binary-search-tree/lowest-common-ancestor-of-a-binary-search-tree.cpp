/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * identify(TreeNode * root,TreeNode *p,TreeNode *q){
        if(root==nullptr||root==p||root==q){
            return root;
        }
        TreeNode *Left=identify(root->left,p,q);
        TreeNode *Right=identify(root->right,p,q);
        if(Left!=nullptr && Right !=nullptr){
            return root;
        }
        if(Left!=nullptr){
            return Left;
        }
        return Right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      return identify(root,p,q);   
    }
};