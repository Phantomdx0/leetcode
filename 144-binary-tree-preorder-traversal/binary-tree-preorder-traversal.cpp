class Solution {
public:
    vector<int> result;

    void preorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        result.push_back(root->val);  // Root
        preorder(root->left);         // Left
        preorder(root->right);        // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return result;
    }
};