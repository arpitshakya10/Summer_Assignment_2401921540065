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
    bool solve(TreeNode* root, int targetSum) {

        if (root == NULL) {
            return false;
        }

        // if leaf node reached
        if (root->left == NULL && root->right == NULL) {
            return targetSum == root->val;
        }

        bool leftAns = solve(root->left, targetSum - root->val);
        bool rightAns = solve(root->right, targetSum - root->val);

        return leftAns || rightAns;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum);
    }
};
