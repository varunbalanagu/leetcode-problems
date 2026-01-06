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
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int maxSum = INT_MIN; // To store the maximum sum found
        int maxLevel = 1; // To store the level with the maximum sum
        int currentLevel = 1; // To keep track of the current level

        while (!q.empty()) {
            int levelSize = q.size();
            int levelSum = 0;

            // Calculate the sum of nodes at the current level
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                levelSum += node->val;

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

            // Update the maximum sum and the corresponding level
            if (levelSum > maxSum) {
                maxSum = levelSum;
                maxLevel = currentLevel;
            }

            ++currentLevel;
        }

        return maxLevel;
    }
};