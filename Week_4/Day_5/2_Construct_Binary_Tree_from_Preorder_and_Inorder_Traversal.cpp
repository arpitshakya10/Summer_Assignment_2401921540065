class Solution {
public:
    int index = 0;

    TreeNode* build(vector<int>& preorder, int start, int end,
                    unordered_map<int,int>& mp){

        if(start > end){
            return NULL;
        }

        int curr = preorder[index++];
        TreeNode* root = new TreeNode(curr);

        int pos = mp[curr];

        root->left = build(preorder, start, pos-1, mp);
        root->right = build(preorder, pos+1, end, mp);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;

        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }

        return build(preorder, 0, inorder.size()-1, mp);
    }
};
