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
    q.push(pRoot);
    bool flag = true;
    TreeNode* iter;
    while (!q.empty()) {
      int len = q.size();
      vector<int> level(len);
      for (int i = 0; i < len; ++i) {
        iter = q.front();
        int index = flag ? i : len - 1 - i;
        level[index] = iter->val;
        q.pop();
        if (iter->left != NULL) {
          q.push(iter->left);
        }
        if (iter->right != NULL) {
          q.push(iter->right);
        }
      }
      flag = !flag;
      res.push_back(level);
    }
    return res;
  }
};
