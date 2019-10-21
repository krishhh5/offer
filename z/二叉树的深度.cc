/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
class Solution {
 public:
  int max_depth(TreeNode* root) {
    if (root == NULL) {
      return 0;
    }
    return max(max_depth(root->left), max_depth(root->right)) + 1;
  }
  int TreeDepth(TreeNode* pRoot) {
    if (pRoot == NULL) {
      return 0;
    }
    return max_depth(pRoot);
  }
};
