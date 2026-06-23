/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();

                int index;

                if (leftToRight == true) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }

                level[index] = temp->val;

                if (temp->left != NULL) {
                    q.push(temp->left);
                }

                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }

            leftToRight = !leftToRight;
            ans.push_back(level);
        }

        return ans;
    }
};
