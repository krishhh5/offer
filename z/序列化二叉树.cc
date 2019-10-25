class Solution {
 public:
  string serialize_helper(TreeNode* node) {
    if (node == NULL) return "N";
    return to_string(node->val) + "," + serialize_helper(node->left) + "," +
           serialize_helper(node->right);
  }

  char* Serialize(TreeNode* root) {
    string s = serialize_helper(root);
    char* ret = new char[s.length() + 1];
    strcpy(ret, const_cast<char*>(s.c_str()));
    return ret;
  }

  TreeNode* deserialize_helper(stringstream& ss) {
    string str;
    getline(ss, str, ',');
    if (str == "N")
      return NULL;
    else {
      TreeNode* node = new TreeNode(stoi(str));
      node->left = deserialize_helper(ss);
      node->right = deserialize_helper(ss);
      return node;
    }
  }

  TreeNode* Deserialize(char* str) {
    stringstream ss(str);
    return deserialize_helper(ss);
  }
};
