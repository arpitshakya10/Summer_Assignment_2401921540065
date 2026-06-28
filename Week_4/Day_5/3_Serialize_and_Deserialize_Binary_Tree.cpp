class Codec {
public:

    string serialize(TreeNode* root) {
        if(root==NULL){
            return "N,";
        }

        string ans = to_string(root->val) + ",";

        ans += serialize(root->left);
        ans += serialize(root->right);

        return ans;
    }

    TreeNode* helper(stringstream& ss){
        string str;
        getline(ss, str, ',');

        if(str=="N"){
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(str));

        root->left = helper(ss);
        root->right = helper(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return helper(ss);
    }
};
