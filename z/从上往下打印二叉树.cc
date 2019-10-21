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
  vector<int> PrintFromTopToBottom(TreeNode* root) {
    vector<int> res;
    if (root == NULL) {
      return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* iter;
    while (!q.empty()) {
      int size = q.size();
      for (int i = 0; i < size; ++i) {
        iter = q.front();
        res.push_back(iter->val);
        q.pop();
        if (iter->left != NULL) {
          q.push(iter->left);
        }
        if (iter->right != NULL) {
          q.push(iter->right);
        }
      }
    }
    return res;
  }
};
