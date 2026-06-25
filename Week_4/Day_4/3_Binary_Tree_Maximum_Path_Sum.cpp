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
    int maxi = INT_MIN;

    int solve(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        int leftSum = max(0, solve(root->left));
        int rightSum = max(0, solve(root->right));

        // path passing through current node
        int currentPath = leftSum + rightSum + root->val;

        maxi = max(maxi, currentPath);

        // return single path
        return max(leftSum, rightSum) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};
