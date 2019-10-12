class Solution {
 public:
  void helper(const string& str, string& tmp, vector<int>& visited, vector<string>& res) {
    if (tmp.size() == str.size()) {
      res.push_back(tmp);
      return;
    }
    for (int i = 0; i < str.size(); ++i) {
      if (i != 0 && str[i] == str[i - 1] && visited[i - 1] == 0) {
        continue;
      }
      if (visited[i] == 0) {
        visited[i] = 1;
        tmp.push_back(str[i]);
        helper(str, tmp, visited, res);
        tmp.pop_back();
        visited[i] = 0;
      }
    }
  }
  vector<string> Permutation(string str) {
    vector<string> res;
    if (str.empty()) {
      return res;
    }
    sort(str.begin(), str.end());
    string tmp;
    vector<int> visited(str.size(), 0);
    helper(str, tmp, visited, res);
    return res;
  }
};
