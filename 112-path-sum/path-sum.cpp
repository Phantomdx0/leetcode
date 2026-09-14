class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;

        // If it is a leaf node
        if (root->left == nullptr && root->right == nullptr)
            return targetSum == root->val;

        // Subtract current node's value and continue
        targetSum -= root->val;

        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
};