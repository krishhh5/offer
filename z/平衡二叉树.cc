class Solution {
 public:
  int max_depth(TreeNode* root) {
    if (root == NULL) {
      return 0;
    }
    return max(max_depth(root->left), max_depth(root->right)) + 1;
  }
  bool IsBalanced_Solution(TreeNode* pRoot) {
    if (pRoot == NULL) {
      return true;
    }
    if (abs(max_depth(pRoot->left) - max_depth(pRoot->right)) > 1) {
      return false;
    }
    bool left = IsBalanced_Solution(pRoot->left);
    bool right = IsBalanced_Solution(pRoot->right);
    return left && right;
  }
};
