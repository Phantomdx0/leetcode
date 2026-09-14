class Solution {
public:
    vector<int> result;

    void postorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        postorder(root->left);         // Left
        postorder(root->right);        // Right
        result.push_back(root->val);   // Root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return result;
    }
};