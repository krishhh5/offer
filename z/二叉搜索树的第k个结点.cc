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
  TreeNode* KthNode(TreeNode* pRoot, int k) {
    if (pRoot == NULL || k <= 0) {
      return NULL;
    }
    stack<TreeNode*> s;
    TreeNode* iter = pRoot;
    vector<pair<TreeNode*, int>> tmp;
    while (iter != NULL || !s.empty()) {
      if (iter != NULL) {
        s.push(iter);
        iter = iter->left;
      } else {
        tmp.push_back(make_pair(s.top(), s.top()->val));
        iter = s.top()->right;
        s.pop();
      }
    }
    if (tmp.size() >= k) {
      return tmp[k - 1].first;
    } else {
      return NULL;
    }
  }
};
