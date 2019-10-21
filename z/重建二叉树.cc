/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
 public:
  TreeNode* helper(vector<int>& pre, int pre_start, int pre_end, vector<int>& vin, int vin_start,
                   int vin_end) {
    if (pre_start > pre_end || vin_start > vin_end) {
      return NULL;
    }
    TreeNode* root = new TreeNode(pre[pre_start]);
    for (int i = vin_start; i <= vin_end; ++i) {
      if (vin[i] == pre[pre_start]) {
        root->left = helper(pre, pre_start + 1, pre_start + i - vin_start, vin, vin_start, i - 1);
        root->right = helper(pre, pre_start + i - vin_start + 1, pre_end, vin, i + 1, vin_end);
        break;
      }
    }
    return root;
  }
  TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
    return helper(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
  }
};
