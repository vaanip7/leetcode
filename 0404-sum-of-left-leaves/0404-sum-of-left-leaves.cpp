class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (!root)
      return 0;

    int total = 0;

    if (root->left && !root->left->left && !root->left->right) {
      total += root->left->val;
    }

    total += sumOfLeftLeaves(root->left);
    total += sumOfLeftLeaves(root->right);

    return total;
  }
};