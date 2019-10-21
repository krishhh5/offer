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
  void helper(TreeNode* root, TreeNode*& prev) {
    if (root == NULL) {
      return;
    }
    helper(root->left, prev);
    root->left = prev;
    if (prev != NULL) {
      prev->right = root;
    }
    prev = root;
    helper(root->right, prev);
  }
  TreeNode* Convert(TreeNode* pRootOfTree) {
    if (pRootOfTree == NULL) {
      return NULL;
    }
    TreeNode* prev = NULL;
    helper(pRootOfTree, prev);
    TreeNode* res = pRootOfTree;
    while (res->left != NULL) {
      res = res->left;
    }
    return res;
  }
};
