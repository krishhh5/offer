/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
 public:
  vector<vector<int>> Print(TreeNode* pRoot) {
    vector<vector<int>> res;
    if (pRoot == NULL) {
      return res;
    }
    queue<TreeNode*> q;
    TreeNode* iter;
    q.push(pRoot);
    while (!q.empty()) {
      int size = q.size();
      vector<int> level;
      for (int i = 0; i < size; ++i) {
        iter = q.front();
        level.push_back(iter->val);
        q.pop();
        if (iter->left != NULL) {
          q.push(iter->left);
        }
        if (iter->right != NULL) {
          q.push(iter->right);
        }
      }
      res.push_back(level);
    }
    return res;
  }
};
