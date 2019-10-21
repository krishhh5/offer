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
  void helper(TreeNode* root, int expectNumber, vector<int>& tmp, vector<vector<int>>& res) {
    tmp.push_back(root->val);
    if (root->left == NULL && root->right == NULL) {
      if (expectNumber == root->val) {
        res.push_back(tmp);
      }
    }
    if (root->left != NULL) {
      helper(root->left, expectNumber - root->val, tmp, res);
    }
    if (root->right != NULL) {
      helper(root->right, expectNumber - root->val, tmp, res);
    }
    tmp.pop_back();
  }
  vector<vector<int>> FindPath(TreeNode* root, int expectNumber) {
    vector<vector<int>> res;
    if (root == NULL) {
      return res;
    }
    vector<int> tmp;
    helper(root, expectNumber, tmp, res);
    return res;
  }
};
