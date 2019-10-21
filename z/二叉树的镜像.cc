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
  TreeNode* helper(TreeNode* root) {
    if (root == NULL) {
      return NULL;
    }
    TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    root->left = helper(root->left);
    root->right = helper(root->right);
    return root;
  }
  void Mirror(TreeNode* pRoot) {
    if (pRoot == NULL) {
      return;
    }
    pRoot = helper(pRoot);
  }
};
