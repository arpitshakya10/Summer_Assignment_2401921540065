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
    int diameter = 0;

    int height(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // check diameter at current node
        diameter = max(diameter, leftHeight + rightHeight);

        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
