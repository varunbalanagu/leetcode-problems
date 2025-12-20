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
    void DFS(TreeNode* root,vector<string>&ans,string str)
    {
        if(root==nullptr)
        {
            return;
        }
        str+=to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr)
        {
            ans.push_back(str);
        }
        str+="->";
        DFS(root->left,ans,str);
        DFS(root->right,ans,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string str="";
        DFS(root,ans,str);
        return ans;
    }
};