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
  bool helper(TreeNode* node1, TreeNode* node2) {
    if (node2 == NULL) {
      return true;
    }
    if (node1 == NULL) {
      return false;
    }
    if (node1->val != node2->val) {
      return false;
    }
    return helper(node1->left, node2->left) && helper(node1->right, node2->right);
  }
  bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
    if (pRoot2 == NULL) {
      return false;
    }
    bool res = false;
    if (pRoot1 != NULL && pRoot2 != NULL) {
      if (pRoot1->val == pRoot2->val) {
        res = helper(pRoot1, pRoot2);
      }
      if (res == false) {
        res = HasSubtree(pRoot1->left, pRoot2);
      }
      if (res == false) {
        res = HasSubtree(pRoot1->right, pRoot2);
      }
    }
    return res;
  }
};
